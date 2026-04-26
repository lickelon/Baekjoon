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

    vector<pii> arr(n);
    for(auto &e : arr) {
        cin >> e.first >> e.second;
    }
    sort(all(arr));

    int ans = 0;
    int t = 0, et = 0;
    for(auto e : arr) {
        int d = e.second;
        while(t < e.first) {
            if(t%7 < 5) {
                d--;
            }
            et++;
            t++;
            if(d == 0) break;
        }
        if(d) {
            et -= d;
            ans += d;
            if(et < 0) {
                ans = -1;
                break;
            }
        }
    }
    cout << ans;
    return 0;
}