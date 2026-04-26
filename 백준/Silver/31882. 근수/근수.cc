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

    int n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 0;
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '2') cnt++;
        else cnt = 0;

        ans += (cnt * (cnt + 1)) / 2;
    }
    cout << ans;

    return 0;
}