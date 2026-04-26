k, l = map(int, input().split())
ans = 0
for i in range(2, l):
    if k % i == 0:
        ans = i
        break
if ans:
    print("BAD", end = " ")
    print(ans)
else:
    print("GOOD")