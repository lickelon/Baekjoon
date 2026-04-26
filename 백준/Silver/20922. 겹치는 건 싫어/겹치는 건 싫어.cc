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
    int k;
    cin >> n >> k;
    vector<int> arr(n);
    for(auto & u : arr) cin >> u;
    int cnt[100001] = {};
    int left = 0;
    int ans = 0;
    int temp = 0;
    for(int i = 0; i < n; i++) {
        cnt[arr[i]]++;
        temp++;
        while(cnt[arr[i]] > k) {
            cnt[arr[left++]]--;
            temp--;
        }
        ans = max(ans, temp);
    }
    cout << ans;
    return 0;
}