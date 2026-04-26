# durumari
f = lambda x: 4-max(0,x-225)//25
print(*[f(n) for n in [*map(int,[*open(0)][1].split())]])