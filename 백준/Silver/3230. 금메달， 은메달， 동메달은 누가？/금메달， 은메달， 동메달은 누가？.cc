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

    int n, m;
    cin >> n >> m;

    vector<pii> arr;
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        for(auto &[a, b] : arr) {
            if(a >= input) a += 1;
        }
        arr.emplace_back(input, i);
    }
    sort(all(arr));
    vector<pii> ans;
    for(int i = 0; i < m; i++) {
        int input;
        cin >> input;
        for(auto &[a, b] : ans) {
            if(a >= input) a += 1;
        }
        ans.emplace_back(input, arr[m-i-1].second);
    }
    sort(all(ans));
    cout << ans[0].second+1 << "\n";
    cout << ans[1].second+1 << "\n";
    cout << ans[2].second+1 << "\n";

    return 0;
}