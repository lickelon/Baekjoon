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
    for(int t = 1; t <= T; t++) {
        int n, m;
        cin >> n >> m;

        ll ans = 0;
        unordered_set<int> _s;
        for(int i = 0; i < n; i++) {
            int input;
            cin >> input;
            if(_s.find(m-input) != _s.end()) ans++;
            _s.insert(input);
        }
        cout << "Case #" << t << ": " << ans << "\n";
    }

    return 0;
}