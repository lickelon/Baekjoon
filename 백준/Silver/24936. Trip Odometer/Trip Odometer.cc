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
    int sum = 0;
    for(auto &u : arr) {
        cin >> u;
        sum += u;
    }
    sort(all(arr));
    vector<int> ans;
    ans.emplace_back(sum - arr[0]);
    for(int i = 1; i < n; i++) {
        if(arr[i] == arr[i-1]) continue;
        ans.emplace_back(sum - arr[i]);
    }
    sort(all(ans));

    cout << ans.size() << "\n";
    for(auto u : ans) {
        cout << u << " ";
    }

    return 0;
}