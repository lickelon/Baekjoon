# durumari
i = 0
while (n0:=int(input())):
  i += 1
  n1 = 3*n0
  if (o:=n1%2): n2 = (n1+1)//2
  else: n2 = n1//2
  n3 = 3*n2
  n4 = n3//9
  print(f'{i}. {["even","odd"][o]} {n4}')