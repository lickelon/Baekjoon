#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

char a[] = "aeiouAEIOU";

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    while (true)
    {
        string s;
        getline(cin, s);
        if(s[0] == '#') break;
        int ans = 0;
        for(auto u : s) {
            for(auto v : a) {
                if(u == v) ans++;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}