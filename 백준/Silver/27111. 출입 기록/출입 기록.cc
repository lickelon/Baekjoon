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

    unordered_set<int> _s;
    int n;
    cin >> n;

    int ans = 0;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if(b) {
            if(_s.find(a) != _s.end()) ans++;
            else _s.insert(a);
        }
        else {
            if(_s.find(a) == _s.end()) ans++;
            else _s.erase(a);
        }
    }
    cout << ans + _s.size();

    return 0;
}