# durumari
def calc(l):
   return l[0]*3+l[1]*20+l[2]*120
L = [calc([*map(int,input().split())]) for _ in range(2)]
print(['Max','Mel'][L[0]<L[1]] if L[0]!=L[1] else 'Draw')