#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for (auto& e : arr) cin >> e;

    int ans = INF;

    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] != arr[i] - (i - j) * k) cnt++;
            if (arr[i] - (i - j) * k < 1) {
                cnt = -1;
                break;
            }
        }
        if (cnt == -1) continue;
        ans = min(ans, cnt);
    }
    cout << ans;

    return 0;
}