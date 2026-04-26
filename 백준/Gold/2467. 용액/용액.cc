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
    for(auto &u : arr) cin >> u;

    int s = 0, e = n-1;

    int m = INF;
    pii ans;
    while(s < e) {
        int sum = arr[s] + arr[e];
        if(m > abs(sum)) {
            m = abs(sum);
            ans = {arr[s], arr[e]};
        }
        if(sum < 0) s++;
        else e--;
    }

    cout << ans.first << " " << ans.second;

    return 0;
}