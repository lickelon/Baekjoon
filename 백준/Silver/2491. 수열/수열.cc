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
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    int ans = 1, asc = 1, desc = 1;

    for(int i = 1; i < n; i++) {
        if(arr[i] >= arr[i-1]) asc++;
        else asc = 1;
        if(arr[i] <= arr[i-1]) desc++;
        else desc = 1;
        
        ans = max(ans, asc);
        ans = max(ans, desc);
    }

    cout << ans;

    return 0;
}