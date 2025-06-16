import sys
import threading
def main():
    import sys
    sys.setrecursionlimit(1 << 25)
    t = int(sys.stdin.readline())
    for _ in range(t):
        n, q = map(int, sys.stdin.readline().split())
        b = list(map(int, sys.stdin.readline().split()))
        total = n + q
        val = [None] * (total + 1)  # val[1..n+q]
        is_root = [True] * (total + 1)

        ops = []
        child1 = [0] * (total + 1)
        child2 = [0] * (total + 1)
        rev_graph = [[] for _ in range(total + 1)]

        for i in range(n):
            val[i+1] = b[i]

        node_id = n + 1
        for _ in range(q):
            x, y, z = map(int, sys.stdin.readline().split())
            ops.append((x, y, z))
            child1[z] = x
            child2[z] = y
            rev_graph[z].append(x)
            rev_graph[z].append(y)
            is_root[x] = False
            is_root[y] = False

        # Top-down: enforce val[c] >= val[u]
        from collections import deque
        queue = deque()
        for i in range(1, n + 1):
            queue.append(i)
        for z in range(n+1, n+q+1):
            if val[z] is not None:
                queue.append(z)

        while queue:
            u = queue.popleft()
            if child1[u] == 0: continue
            for c in [child1[u], child2[u]]:
                if val[u] is not None:
                    if val[c] is None:
                        val[c] = val[u]
                        queue.append(c)
                    else:
                        if val[c] < val[u]:
                            print(-1)
                            break
            else:
                continue
            break
        else:
            # Bottom-up: compute val[u] = min(val[c1], val[c2])
            for z in range(n + 1, n + q + 1):
                x = child1[z]
                y = child2[z]
                if val[z] is None:
                    val[z] = min(val[x], val[y])
                else:
                    if val[z] != min(val[x], val[y]):
                        print(-1)
                        break
            else:
                print(' '.join(str(val[i]) for i in range(1, n+1)))
                continue
            continue
        # If break encountered in inner loop
        continue
threading.Thread(target=main).start()
