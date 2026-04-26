def getpi(S):
    m = len(S)
    j = 0
    pi = [0 for i in range(m)]
    for i in range(1, m):
        while j > 0 and S[i] != S[j]:
            j = pi[j - 1]
        if S[i] == S[j]:
            j += 1
            pi[i] = j
    return S[0:pi[-1]], pi

def KMP(S, P, pi):
    m = len(S)
    n = len(P)
    j = 0

    for i in range(1, m - 1):
        while j > 0 and S[i] != P[j]:
            j = pi[j - 1]
        if S[i] == P[j]:
            if j == n - 1:
                return P
            else:
                j += 1
    return '-1'

S = input()
P, pi = getpi(S)
if(P == ''):
     print('-1')
else:
    while True:
        T = KMP(S, P, pi)
        if T == '-1':
            P, pi = getpi(P)
            if(P == ''):
                print('-1')
                break
        else:
            print(T)
            break