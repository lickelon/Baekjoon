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

    ll f = 0;
    string s;
    cin >> s;
    ll ans = 0;
    for(int i = 1; i < s.length(); i++) {
        if(s[i] == '(' && s[i-1] == '(') f++;
        if(s[i] == ')' && s[i-1] == ')') {
            ans += f;
        }
    }
    cout << ans;

    return 0;
}