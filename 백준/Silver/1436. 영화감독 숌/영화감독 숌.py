N = int(input())
i = 665

while N:
    i += 1
    if str(i).find('666') != -1:
        N -= 1
print(i)