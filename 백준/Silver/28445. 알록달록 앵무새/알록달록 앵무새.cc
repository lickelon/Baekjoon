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

    set<string> _s;
    set<pair<string,string>> ans;
    for(int i = 0; i < 4; i++) {
        string input;
        cin >> input;
        _s.insert(input);
    }

    for(auto u : _s) {
        for(auto v : _s) {
            ans.insert(make_pair(u, v));
        }
    }

    for(auto u : ans) {
        cout << u.first << " " << u.second << "\n";
    }

    return 0;
}