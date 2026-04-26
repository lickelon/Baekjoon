#include <bits/stdc++.h>

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

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> ans(k+1, 100000);
    ans[0] = 0;
    for(int i = 0; i < k+1; i++) {
        for(int j = 0; j < n; j++) {
            if(i + arr[j] <= k) {
                ans[i+arr[j]] = min(ans[i+arr[j]], ans[i] + 1);
            }
        }
    }

    cout << (ans[k] > 50000 ? -1 : ans[k]);

    return 0;
}