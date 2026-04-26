N = int(input())
L = [0 for _ in range(1000001)]
for _ in range(N):
    ip = int(input())
    if ip >= 0 and ip <= 1000000:
        L[ip] = 1
for i in range(1000001):
    if L[i] == 0:
        print(i)
        break