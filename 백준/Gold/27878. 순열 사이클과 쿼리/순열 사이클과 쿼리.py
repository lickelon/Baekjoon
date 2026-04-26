import sys
input=sys.stdin.readline

n, m = map(int,input().split())
arr = list(map(int,input().split()))
arr.insert(0, 0)

q = int(input())
for i in range(q):
    buff = input()
    if buff[0] == '1':
        t, a, b = map(int, buff.split())
        temp = arr[a]
        arr[a] = arr[b]
        arr[b] = temp
    else:
        check = [False for _ in range(n+1)]
        ans = 0
        for j in range(1, n+1):
            if check[j]:
                continue
            perm = [j]
            check[j] = True
            while arr[perm[-1]] != perm[0]:
                perm.append(arr[perm[-1]])
                check[perm[-1]] = True
            d = m % len(perm)
            for idx, num in enumerate(perm):
                ans = ans + num * perm[(idx + d) % len(perm)]
        print(ans)