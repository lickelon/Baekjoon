#include <bits/stdc++.h>

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

    vector<int> arr(n+1);
    for (int i = 0; i < n+1; i++)
        cin >> arr[i];
    
    int ans = 0;

    for(int i = 0; i < n; i++) {
        int temp = arr[i + 1] - arr[i];
        if(temp < 0) temp = -temp;
        temp = min(temp, 360 - temp);
        ans += temp;
    }

    cout << ans;

    return 0;
}