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
    

    int ans = 0;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if(arr[i] == 0) continue;
        ans += max(0, b-a);
    }
    cout << ans;
    return 0;
}