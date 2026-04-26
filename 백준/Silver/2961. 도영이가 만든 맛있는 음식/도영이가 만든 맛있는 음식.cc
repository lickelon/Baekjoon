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
    for(int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }
    int ans = INF;
    for(int i = 1; i < 1 << n; i++) {
        int S = 1, B = 0;
        for(int j = 0; j < n; j++) {
            if((i >> j) & 1) {
                S *= arr[j].first;
                B += arr[j].second;
            }
        }
        ans = min(ans, abs(S-B));
    }
    cout << ans;
    
    return 0;
}