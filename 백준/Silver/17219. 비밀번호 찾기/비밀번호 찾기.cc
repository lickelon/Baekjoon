#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF

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

    map<string, string> _m;
    for(int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        _m[a] = b;
    }

    for(int i = 0; i < m; i++) {
        string a;
        cin >> a;
        cout << _m[a] << "\n";
    }

    return 0;
}