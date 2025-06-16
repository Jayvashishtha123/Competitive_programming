MOD = 998244353

def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    idx = 0
    t = int(data[idx])
    idx += 1
    for _ in range(t):
        n = int(data[idx])
        idx += 1
        parents = list(map(int, data[idx:idx+n-1]))
        idx += n-1
        
        # Build tree
        children = [[] for _ in range(n+1)]
        for i in range(2, n+1):
            children[parents[i-2]].append(i)
        
        # BFS to find distances
        from collections import deque
        d = [0] * (n+1)
        q = deque()
        q.append(1)
        while q:
            v = q.popleft()
            for u in children[v]:
                d[u] = d[v] + 1
                q.append(u)
        
        # Group vertices by distance
        max_d = max(d)
        levels = [[] for _ in range(max_d+1)]
        for u in range(1, n+1):
            levels[d[u]].append(u)
        
        # DP array
        dp = [0] * (n+1)
        dp[1] = 1
        
        # Iterate over levels
        for l in range(1, max_d+1):
            for u in levels[l]:
                for v in levels[l-1]:
                    if u not in children[v]:
                        dp[u] = (dp[u] + dp[v]) % MOD
        
        # Sum all dp[u]
        total = 0
        for u in range(1, n+1):
            total = (total + dp[u]) % MOD
        print(total)

if __name__ == "__main__":
    main()