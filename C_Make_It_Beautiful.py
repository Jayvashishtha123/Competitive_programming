import sys
def solve():
    n, k = map(int, sys.stdin.readline().split())
    v = list(map(int, sys.stdin.readline().split()))
    

def main():
    sys.stdin = open("input.txt", "r")
    sys.stdout = open("output.txt", "w")
    t = int(sys.stdin.readline().strip())
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
