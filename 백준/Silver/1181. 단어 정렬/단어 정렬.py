N = int(input())
S = set([])
for i in range(N):
    S.add(input())
L = sorted(list(S), key=lambda X: (len(X), X))
for i in range(len(L)):
    print(L[i])