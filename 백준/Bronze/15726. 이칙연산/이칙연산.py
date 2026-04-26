a, b, c = map(int, input().split())
r1 = a * b / c
r2 = a / b * c
print(int(r1 if r1 > r2 else r2))