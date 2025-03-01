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

    ll sum = 0;
    ll max = 0;
    string ans;

    for(int i = 0; i < n; i++) {
        ll cnt = 0;
        string name;
        int k, m;
        cin >> name >> k >> m;
        while(k <= m) {
            m -= k;
            cnt++;
            m += 2;
        }
        sum += cnt;
        if(cnt > max) {
            max = cnt;
            ans = name;
        }
    }
    cout << sum << "\n" << ans;

    return 0;
}