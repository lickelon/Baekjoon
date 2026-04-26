n=int(input())
for _ in range(n):
    k=int(input())
    print("#"*k)
    for i in range(k-2):
        print("#"+"J"*(k-2)+"#")
    if k > 1:
        print("#"*k)
    print()