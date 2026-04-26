for _ in range(0, 3):
    n = int(input())
    sum = 0
    for i in range(0, n):
        a = int(input())
        sum = sum + a
    if sum > 0:
        print("+")
    elif sum < 0:
        print("-")
    else:
        print("0")