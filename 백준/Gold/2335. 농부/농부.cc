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

    int q, m, k;
    cin >> q >> m >> k;
    vector<bool> check(q+1);
    vector<int> arr1(m);
    for(auto &u : arr1) cin >> u;
    sort(all(arr1), greater<int>());
    check[0] = 1;
    for(int i = 0; i < m; i++) {
        for(int j = q; j >= arr1[i]; j--) {
            if(check[j-arr1[i]]) check[j] = 1;
        }
    }

    vector<int> arr2(k);
    for(auto &u : arr2) cin >> u;
    sort(all(arr2), greater<int>());

    int ans = 0;
    for(int i = q; i >= 0; i--) {
        if(check[i]) {
            ans = i;
            break;
        }
    }
    int cnt = ans;
    int sum = 0;
    for(auto u : arr1) {
        sum += u;
    }
    if(sum >= q) {
        ans = max(ans, q-1);
        cnt = max(q, cnt);
    }
    
    for(int i = 0; i < k; i++) {
        if(q-cnt <= arr2[i]) {
            ans += max(q-cnt-1, 0);
            cnt += q-cnt;
            break;
        }
        else {
            ans += arr2[i]-1;
            cnt += arr2[i];
        }
    }
    cout << ans;

    return 0;
}