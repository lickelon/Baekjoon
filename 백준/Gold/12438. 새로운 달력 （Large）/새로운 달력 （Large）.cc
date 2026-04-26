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
    //ios::sync_with_stdio(0);
    //cin.tie(0); cout.tie(0);

    int T;
    cin >> T;
    for(int i = 0; i < T; i++) {
        ll tm, md, wd;
        cin >> tm >> md >> wd;

        ll mc = 0;
        ll left = 0;
        ll mw = 0;
        vector<ll> arr(1);
        mc = 1;
        left = md % wd;
        mw = md / wd;
        mw += (left ? 1 : 0);
        arr.emplace_back(mw);
        while(left) {
            ll temp = md;
            temp += left;

            mc += 1;
            left = temp % wd;
            mw += temp / wd;
            mw += (left ? 1 : 0);
            arr.emplace_back(mw);
        }
        ll ans = 0;
        ans += (tm / mc) * mw;
        ans += arr[tm%mc];

        cout << "Case #" << i+1 <<": " << ans << "\n";
    }

    return 0;
}