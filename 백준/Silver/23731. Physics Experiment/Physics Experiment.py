N = int(input())

count = 0
temp = N
while temp > 0:
    temp = temp // 10
    count += 1

for i in range(0, count+1):
    N = max(round(N + 0.1, -i), N)

print(int(N))