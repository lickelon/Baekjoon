#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF
#define MOD 1000000009

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
    ll ans = 1;

    char before = 'a';
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'c') {
            ans *= 26 - (s[i] == before);
        }
        else {
            ans *= 10 - (s[i] == before);
        }
        before = s[i];
        ans %= MOD;
    }
    cout << ans;

    return 0;
}