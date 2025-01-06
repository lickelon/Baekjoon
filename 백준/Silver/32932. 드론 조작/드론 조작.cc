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

    int n, k;
    cin >> n >> k;
    set<pii> _s;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        _s.emplace(a, b);
    }
    int x = 0, y = 0;
    string s;
    cin >> s;
    for(auto c : s) {
        int dx = 0, dy = 0;
        if(c == 'U') dy = 1;
        if(c == 'D') dy = -1;
        if(c == 'L') dx = -1;
        if(c == 'R') dx = 1;
        if(_s.find({x+dx, y+dy}) != _s.end()) continue;
        x += dx, y += dy;
    }
    cout << x << " " << y;

    return 0;
}