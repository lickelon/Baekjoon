# durumari
while 1:
    a, b, c = map(int,input().split())
    if a == 0 and b == 0 and c == 0: break
    print('X' if (c-a)%b != 0 or (c-a)//b < 0 else (c-a)//b+1)