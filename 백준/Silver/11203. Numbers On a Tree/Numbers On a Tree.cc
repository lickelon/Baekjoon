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

    int H;
    string s;
    cin >> H >> s;
    int ans = 1;
    for(auto u : s) {
        ans *= 2;
        if(u == 'R') {
            ans += 1;
        }
    }
    cout << (2 << H) - ans;

    return 0;
}