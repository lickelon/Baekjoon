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

    ll b, n, m;
    cin >> b >> n >> m;

    unordered_map<string, ll> _m;
    for(int i = 0; i < n; i++) {
        string s;
        ll p;
        cin >> s >> p;
        _m[s] = p;
    }

    ll sum = 0;
    for(int i = 0; i < m; i++) {
        string s;
        cin >> s;
        sum += _m[s];
    }

    cout << (sum <= b ? "acceptable" : "unacceptable");

    //assert(!(b==50 && n == 5 && m == 2 && sum == 48));

    return 0;
}