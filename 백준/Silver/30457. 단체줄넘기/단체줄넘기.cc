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
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(all(arr));
    if(n == 1) {
        cout << 1;
        return 0;
    }
    int ans = 2;
    for(int i = 2; i < n; i++) {
        if(arr[i] == arr[i-2]) continue;
        ans++;
    }
    cout << ans;

    return 0;
}