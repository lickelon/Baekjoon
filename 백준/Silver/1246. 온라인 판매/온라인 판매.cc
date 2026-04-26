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

    int n, m;
    cin >> n >> m;
    vector<int> arr(m);
    for (int i = 0; i < m; i++)
        cin >> arr[i];
    
    sort(all(arr));
    int ans = 0;
    int ansv = 0;
    for(int i = 0; i < m; i++) {
        if(ans < min(n, m-i) * arr[i]) {
            ans = min(n, m-i) * arr[i];
            ansv = arr[i];
        }
    }
    cout << ansv << " " << ans;

    return 0;
}