import sys
sys.setrecursionlimit(10000)

def dp(x, y):
    if x == n - 1 and y == m - 1: return 1
    if arr[x][y] != -1: return arr[x][y]
    ans = 0
    if x < n - 1: ans += dp(x + 1, y)
    if y < m - 1: ans += dp(x, y + 1)
    if x < n - 1 and y < m - 1: ans += dp(x + 1, y + 1)
    arr[x][y] = ans
    return arr[x][y]

n, m = map(int, input().split())
arr = [[-1 for _ in range(m)] for __ in range(n)]

print(dp(0, 0) % 1000000007)