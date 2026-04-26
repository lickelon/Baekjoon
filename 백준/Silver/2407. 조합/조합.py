n, m = map(int, input().split())
m = min(m, n - m)
ans = 1
for i in range(m):
    ans = ans * (n - i)
for i in range(m):
    ans = ans // (i+1)

print(ans)