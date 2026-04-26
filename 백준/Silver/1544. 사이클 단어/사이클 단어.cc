#include <bits/stdc++.h>

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

    int n;
    cin >> n;
    
    set<string> _s;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        
        string t = s;
        int l = s.length();
        for(int j = 0; j < l; j++) {
            s = s.substr(1) + s.substr(0, 1);
            t = min(t, s);
        }
        _s.insert(t);
    }
    cout << _s.size();

    return 0;
}