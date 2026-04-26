n = int(input())

a = 0
b = 1
for _ in range(n):
    b = b + a
    a = b - a

print(a)