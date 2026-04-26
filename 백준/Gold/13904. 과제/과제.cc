#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

bool comp(pii& a, pii& b) {
    return a.second > b.second;
}

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
    sort(all(arr), comp);

    vector<bool> ss(1001, false);
    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = arr[i].first; j > 0; j--) {
            if(!ss[j]) {
                ss[j] = true;
                ans += arr[i].second;
                break;
            }
        }
    }

    cout << ans;

    return 0;
}