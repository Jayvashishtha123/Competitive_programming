import subprocess

def upscale_to_4k_fast(input_file, output_file):
    """ Upscales video to 4K quickly using H.264 encoding """

    if not output_file.lower().endswith(".mp4"):
        output_file += ".mp4"

    try:
        subprocess.run([
            "ffmpeg", "-i", input_file,
            "-vf", "scale=3840:2160:flags=lanczos",  # Upscale to 4K
            "-c:v", "libx264", "-preset", "fast", "-crf", "22",  # Faster encoding
            "-c:a", "aac", "-b:a", "192k",
            output_file
        ], check=True)
        print(f"\nUpscaling to 4K completed: {output_file}")
    except Exception as e:
        print(f"Upscaling error: {e}")

if __name__ == "__main__":
    input_file = input("Enter the path of the file to upscale: ")
    output_file = input("Enter the desired output file name (without extension, e.g., converted_4K): ")
    upscale_to_4k_fast(input_file, output_file)
