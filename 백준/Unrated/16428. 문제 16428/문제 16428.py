a, b = map(int, input().split())
q = a // b;
r = a % b;
if r < 0:
    q = q + 1;
    r = r - b;
print(q)
print(r)