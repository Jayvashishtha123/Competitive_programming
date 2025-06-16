import yt_dlp

def download_youtube_video(url, output_path="."):
    ydl_opts = {
        'outtmpl': f'{output_path}/%(title)s.%(ext)s',
        'format': 'best',
        'ffmpeg_location': '/opt/homebrew/bin/ffmpeg',
        'merge_output_format': 'mp4',
           # 🔥 Boost speed
    'concurrent_fragment_downloads': 10,     # Default is 1; up to 20 is safe
    'fragment_retries': 10,                  # Retry failed segments
    'retries': 10,                           # Retry entire download
    'nopart': False  
    }

    with yt_dlp.YoutubeDL(ydl_opts) as ydl:
        ydl.download([url])

def progress_hook(d):
    if d['status'] == 'downloading':
        print(f"Downloading: {d['_percent_str']} of {d['_total_bytes_str']}", end='\r')
    elif d['status'] == 'finished':
        print("\nDownload completed successfully!")

if __name__ == "__main__":
    video_url = input("Enter Url:")
    download_youtube_video(video_url, output_path="/Users/apple/Documents")
