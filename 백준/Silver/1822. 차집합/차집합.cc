#include <bits/stdc++.h>

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
    set<int> _s;

    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        _s.insert(input);
    }

    for(int i = 0; i < m; i++) {
        int input;
        cin >> input;
        if(_s.find(input) != _s.end()) {
            _s.erase(_s.find(input));
        };
    }

    cout << _s.size() << "\n";
    for(auto u : _s) {
        cout << u << " ";
    }


    return 0;
}