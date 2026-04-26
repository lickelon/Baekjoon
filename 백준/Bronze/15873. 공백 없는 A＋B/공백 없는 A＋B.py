N = input()
A = N[:1]
B = N[1:]

if (len(N) > 3) or ((len(N) > 2) and int(B) < 10):
    A = N[:2]
    B = N[2:]

print(int(A) + int(B))