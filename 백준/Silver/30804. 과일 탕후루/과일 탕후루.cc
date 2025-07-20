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

    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &e : arr) {
        cin >> e;
    }
    int l = 0;
    vector<int> cnt(10);
    int v = 0;

    int ans = 0;
    for(int r = 0; r < n; r++) {
        if(cnt[arr[r]] == 0) v++;
        cnt[arr[r]]++;
        while(v > 2) {
            cnt[arr[l]]--;
            if(cnt[arr[l]] == 0) v--;
            l++;
        }
        ans = max(ans, r-l+1);
    }
    cout << ans;
    return 0;
}