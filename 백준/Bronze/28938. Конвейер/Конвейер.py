# durumari
input()
s = sum([*map(int,input().split())])
print('Stay' if s == 0 else 'Left' if s < 0 else 'Right')