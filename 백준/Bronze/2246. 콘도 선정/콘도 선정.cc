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
    int ans = 0;
    for(int i = 0; i < n; i++) {
        bool flag = true;
        for(int j = 0; j < n; j++) {
            if(i == j) continue;
            if(arr[i].first >= arr[j].first && arr[i].second >= arr[j].second) {
                flag = false;
                break;
            }
        }
        ans += flag;
    }
    cout << ans;
    return 0;
}