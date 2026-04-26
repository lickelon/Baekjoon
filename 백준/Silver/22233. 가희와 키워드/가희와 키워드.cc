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

    unordered_set<string> _s;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        _s.insert(s);
    }

    for(int i = 0; i < m; i++) {
        string s;
        cin >> s;
        istringstream iss(s);
        string buf;
        while(getline(iss, buf, ',')) {
            if(_s.find(buf) != _s.end()) {
                _s.erase(buf);
                n -= 1;
            }
        }
        cout << n << "\n";
    }

    return 0;
}