# durumari
def solve(a,b,c):
    if a+b <= c: return 0
    if a == b == c: return 1
    if a == b or b == c: return 2
    return 3
while 1:
    a,b,c = sorted([*map(int,input().split())])
    if a == 0: break
    print(['Invalid','Equilateral','Isosceles','Scalene'][solve(a,b,c)])
    