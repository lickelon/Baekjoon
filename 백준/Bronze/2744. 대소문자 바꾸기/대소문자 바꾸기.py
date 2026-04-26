word = input()
for a in word:
    if a < 'Z':
        print(a.lower(), end='')
    else:
        print(a.upper(), end='')