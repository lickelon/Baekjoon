#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<ll> a(100001), b(100001);
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        a[input]++;
    }
    for(int i = 0; i < m; i++) {
        int input;
        cin >> input;
        b[input]++;
    }
    for(int i = 1; i <= 100000; i++) {
        a[i] += a[i-1];
        b[i] += b[i-1];
    }

    ll wa, wb, d;
    wa = wb = d = 0;

    for(int i = 1; i <= 100000; i++) {
        ll ak, bk;
        ak = a[i] - a[i-1];
        bk = b[i] - b[i-1];
        wa += ak * b[i-1];
        wb += bk * a[i-1];
        d += ak * bk;
    }
    cout << wa << " " << wb << " " << d;

    return 0;
}