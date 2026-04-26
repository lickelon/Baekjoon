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

    int p;
    cin >> p;
    while(p--) {
        int k, n;
        cin >> k >> n;
        vector<int> arr(n);
        for(auto &u : arr) cin >> u;
        vector<int> sarr(all(arr));
        sort(all(sarr));
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] == sarr[cnt]) cnt++;
        }
        cout << k << " " << n - cnt << "\n";
    }

    return 0;
}