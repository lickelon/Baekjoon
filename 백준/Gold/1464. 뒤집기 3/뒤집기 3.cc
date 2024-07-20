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

    string s;
    cin >> s;

    string ans = "";
    ans = ans + s[0];
    for(int i = 1; i < s.size(); i++) {
        if(ans[0] >= s[i]) {
            ans = s[i] + ans;
        }
        else {
            ans = ans + s[i];
        }
    }
    cout << ans;

    return 0;
}