def getpi(str):
    L = len(str)
    pi = [0 for i in range(L)]
    j = 0
    for i in range(1, L):
        while j > 0 and str[i] != str[j]:
            j = pi[j - 1]
        if str[i] == str[j]:
            pi[i] = j + 1
            j += 1

    return pi

def KMP(s, p):
    m = len(s)
    n = len(p)
    pi = getpi(p)
    count = 0
    j = 0
    for i in range(m):
        while j > 0 and s[i] != p[j]:
            j = pi[j - 1]
        if s[i] == p[j]:
            if j == n - 1:
                count += 1
                j = pi[j]
            else:
                j += 1
    return count

s = input()
p = input()

if KMP(s,p) > 0:
    print(1)
else:
    print(0)