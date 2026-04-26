# durumari
S = {
    'give you up', 'let you down', 'run around and desert you', 
    'make you cry', 'say goodbye', 'tell a lie and hurt you', 'stop'
}
def solve(l):
    for s in l:
        if not s.startswith('Never gonna '): return True
        if s[12:] not in S: return True
    return False
        
print(['No','Yes'][solve([s.strip() for s in [*open(0)][1:]])])