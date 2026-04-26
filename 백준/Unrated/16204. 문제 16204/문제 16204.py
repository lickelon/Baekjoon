n, m, k = map(int, input().split())
ho = m;
hx = n-m;
to = k;
tx = n-k;

ans = min(ho, to) + min(hx, tx)
print(ans)