#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    map<string, int> _m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        _m[s]++;
    }
    string ans = "";
    int M = 0;
    for(auto u : _m) {
        if(u.second > M) {
            ans = u.first;
            M = u.second;
        }
        else if(u.second == M) {
            ans = min(ans, u.first);
        }
    }
    cout << ans;

    return 0;
}