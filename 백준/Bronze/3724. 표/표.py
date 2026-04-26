T = int(input())
for _ in range(T):
    m, n = map(int, input().split())
    arr = [[] for __ in range(n)]
    for i in range(n):
        arr[i] = list(map(int, input().split()))
    M = None
    ans = -1
    for i in range(m):
        tmp = 1
        for j in range(n):
            tmp *= arr[j][i]
        if M == None or tmp >= M:
            ans = i
            M = tmp
    print(ans+1)