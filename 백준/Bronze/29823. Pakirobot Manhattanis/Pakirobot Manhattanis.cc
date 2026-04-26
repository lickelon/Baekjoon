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
    string s;
    cin >> s;
    int u = 0, r = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'N') u += 1;
        if(s[i] == 'S') u -= 1;
        if(s[i] == 'E') r += 1;
        if(s[i] == 'W') r -= 1;
    }
    cout << abs(u) + abs(r);

    return 0;
}