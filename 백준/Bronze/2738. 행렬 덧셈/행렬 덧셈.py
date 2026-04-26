a,b = map(int,input().split())

result = []

for i in range(a):
    l = list(map(int, input().split()))
    result.append(l)

for i in range(a):
    l = list(map(int, input().split()))
    for j in range(b):
        result[i][j] += l[j]

for i in range(a):
    for j in range(b):
        print(result[i][j], end = ' ')
    print('')
