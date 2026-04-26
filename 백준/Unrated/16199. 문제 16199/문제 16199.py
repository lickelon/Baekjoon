by, bm, bd = map(int, input().split())
cy, cm, cd = map(int, input().split())
b = bm * 100 + bd;
c = cm * 100 + cd;

y1 = cy - by - 1;
if(c >= b):
    y1 += 1

y2 = cy - by + 1;
y3 = cy - by;
print(y1)
print(y2)
print(y3)