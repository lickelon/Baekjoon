# durumari
for _ in range(int(input())):
  N = int(input())
  S = ', '.join([f'{n} {N-n}' for n in range(1,(N+1)//2)])
  print(f'Pairs for {N}: {S}')