A = [*map(int,open(0))]
def solve():
    D = dict()
    for a in A: 
        if a in D: D[a] += 1
        else: D[a] = 1
    for k,v in D.items():
        if v%2: return k
print(solve())