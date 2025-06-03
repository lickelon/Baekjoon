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

    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(auto &e : arr) cin >> e;
        
        int ans = 1;
        while(true) {
            set<int> _s;
            for(auto e : arr) {
                if(_s.find(e % ans) != _s.end()) break;
                _s.insert(e % ans);
            }
            if(_s.size() == n) break;
            ans++;
        }
        cout << ans << "\n";
    }

    return 0;
}