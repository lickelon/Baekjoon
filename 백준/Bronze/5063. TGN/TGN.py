# durumari
def solve(a,b,c):
    if a < b-c: return 'advertise'
    if a > b-c: return 'do not advertise'
    return 'does not matter'
for n in range(int(input())):
    print(solve(*map(int,input().split())))