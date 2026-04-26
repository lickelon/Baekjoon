p, k = map(int, input().split())

ans = True
for i in range(2, k):
    if p % i == 0:
        ans = False
        break

if ans:
    print('GOOD')
else:
    print('BAD', i)