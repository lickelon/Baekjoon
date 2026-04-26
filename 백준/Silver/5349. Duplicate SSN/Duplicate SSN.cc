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

    string s;
    cin >> s;
    set<string> _s, ans;
    while(true) {
        cin >> s;
        if(s == "000-00-0000") break;
        if(_s.find(s) != _s.end()) {
            ans.insert(s);
        }
        _s.insert(s);
    }

    for(auto u : ans) {
        cout << u << "\n";
    }

    return 0;
}