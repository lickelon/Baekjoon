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

    int before = -1;
    int cnt = 0;
    vector<int> d;
    for(int i = 0; i < n; i++) {
        if(arr[i] != before) {
            d.push_back(cnt);
            cnt = 1;
            before = arr[i];
        }
        else {
            cnt++;
        }
    }
    d.push_back(cnt);
    int ans = 0;
    for(int i = 0; i < d.size()-1; i++) {
        ans = max(ans, d[i]+d[i+1]);
    }
    cout << ans;


    return 0;
}