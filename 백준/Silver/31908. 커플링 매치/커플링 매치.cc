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

    int n;
    cin >> n;
    
    map<string, vector<string>> _m;
    for(int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        if(b == "-") continue;
        _m[b].push_back(a);
    }

    vector<pair<string, string>> ans;
    for(auto [k, v] : _m) {
        if(v.size() != 2) continue;
        ans.emplace_back(v[0], v[1]);
    }
    cout << ans.size() << "\n";
    for(auto e : ans){
        cout << e.first << " " << e.second << "\n";
    }

    return 0;
}