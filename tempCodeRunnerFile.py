import sys
sys.setrecursionlimit(1 << 25)
from collections import defaultdict
from typing import List

MOD = 10**9 + 7
N = 2 * 10**5 + 10
pw = [1] * N

adj: List[List[int]] = [[] for _ in range(N)]
lens = []
lca = -1

def preprocess():
    for i in range(1, N):
        pw[i] = (pw[i - 1] * 2) % MOD

def dfs(u, par, length):
    global lca
    if len(adj[u]) > 2:  
        lca = length

    is_leaf = True
    for v in adj[u]:
        if v != par:
            dfs(v, u, length + 1)
            is_leaf = False

    if is_leaf:
        lens.append(length)

def solve():
    global lens, lca
    n = int(input())
    for i in range(n + 1):
        adj[i].clear()
    lens.clear()
    lca = -1

    for _ in range(n - 1):
        u, v = map(int, input().split())
        adj[u].append(v)
        adj[v].append(u)
    adj[1].append(0)
    dfs(1, 0, 1)
    if len(lens) > 2:
        print(0)
    elif len(lens) == 1:
        print(pw[n])
    else:
        diff = abs(lens[0] - lens[1])
        x = diff + lca
        if diff:
            print((pw[x] + pw[x - 1]) % MOD)
        else:
            print((2 * pw[x]) % MOD)

def main():
    preprocess()
    sys.stdin = open("input.txt", "r")
    sys.stdout = open("output.txt", "w")

    t = int(input())
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
