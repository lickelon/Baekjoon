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

    vector<int> arr(n);
    for(auto &e : arr) cin >> e;

    int ans = 0;
    for(int i = 0; i < n; i++) {
        int p = arr[i];
        int M = 0;
        int cnt = 0;
        int prev = -1;
        for(int j = 0; j < n; j++) {
            if(arr[j] == p) continue;
            if(arr[j] == prev) cnt++;
            else cnt = 1;
            M = max(M, cnt);
            prev = arr[j];
        }
        ans = max(M, ans);
    }
    cout << ans;

    return 0;
}