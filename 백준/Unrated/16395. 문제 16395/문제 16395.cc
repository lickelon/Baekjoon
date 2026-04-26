#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

ll arr[31][31];

ll comb(int n, int r) {
    if(arr[n][r] != 0) return arr[n][r];
    if(n == r || r == 0) return 1;
    return arr[n][r] = comb(n-1, r-1) + comb(n-1, r);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, r;
    cin >> n >> r;
    cout << comb(n-1, r-1);

    return 0;
}