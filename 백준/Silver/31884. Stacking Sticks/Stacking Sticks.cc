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

    int q;
    cin >> q;
    unordered_map<int, int> _map;
    while(q--) {
        int a, b;
        cin >> a >> b;
        if(a == 1) {
            int top = max({_map[b], _map[b+1], _map[b+2], _map[b+3]});
            _map[b] = _map[b+1] = _map[b+2] = _map[b+3] = top+1;
        }
        if(a == 2) {
            _map[b] += 4;
        }
        if(a == 3) {
            cout << _map[b] << "\n";
        }
    }

    return 0;
}