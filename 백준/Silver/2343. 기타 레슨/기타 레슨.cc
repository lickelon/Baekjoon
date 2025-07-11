#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for(auto &e : arr) cin >> e;

    int l = ranges::max(arr), r = 1000000000;
    while(l < r) {
        int mid = (l+r) / 2;
        int cnt = 1;
        int sum = 0;
        for(auto e : arr) {
            sum += e;
            if(sum > mid) {
                sum = e;
                cnt++;
            }
        }
        if(cnt <= m) {
            r = mid;
        }
        else {
            l = mid + 1;
        }
    }
    cout << l;
    return 0;
}