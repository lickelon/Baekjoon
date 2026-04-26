# durumari
A,B = map(int,input().split())
K,X = map(int,input().split())
R = min(K+X,B) - max(K-X,A) + 1
print(R if R > 0 else "IMPOSSIBLE")