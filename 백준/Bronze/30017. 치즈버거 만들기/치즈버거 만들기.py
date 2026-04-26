# durumari
a,b = map(int,input().split())
a = min(a,b+1)
b = min(a-1,b)
print(a+b)