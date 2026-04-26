#include <bits/stdc++.h>

#define INF 0x7FFFFFFF
#define MAX 4000001
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
    set<string> s;
    for(int i = 0; i < n; i++) {
        string _s;
        cin >> _s;
        s.insert(_s);
    }

    vector<string> ans;
    for(int i = 0; i < m; i++) {
        string _s;
        cin >> _s;
        if(s.find(_s) != s.end()) {
            ans.emplace_back(_s);
        }
    }
    sort(ans.begin(), ans.end());
    
    cout << ans.size() << "\n";

    for(string u : ans) {
        cout << u << "\n";
    }

    return 0;
}