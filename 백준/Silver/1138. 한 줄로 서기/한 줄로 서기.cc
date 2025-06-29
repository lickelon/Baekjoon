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
    for(auto &e : arr) cin >> e;

    vector<int> ans(n);
    for(int i = 0; i < n; i++) {
        int cnt = 0;
        for(int j = 0; j < n; j++) {
            if(ans[j] == 0) {
                if(cnt == arr[i]) {
                    ans[j] = i+1;
                    break;
                }
                cnt++;
            }
        }
    }
    for(auto e : ans) cout << e << " ";

    return 0;
}