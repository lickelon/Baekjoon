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

    int n, k;
    cin >> n >> k;

    bitset<32> bt;
    int ans = 0;
    while(true) {
        bt = bitset<32>(n);
        if(bt.count() <= k) break;
        for(int i = 0; i < bt.size(); i++) {
            if(bt[i]) {
                ans += 1 << i;
                n += 1 << i;
                break;
            }
        }
    }
    cout << ans;

    return 0;
}