import sys
input = sys.stdin.readline
n = int(input())
data = []
for i in range(n):
	s,i,d = map(str, input().split())
	i = int(i)
	d = int(d)
	data.append([i, s[d-1]])
data.sort()
ans = ""
for i in range(n):
	ans += data[i][1]
print(ans.upper())