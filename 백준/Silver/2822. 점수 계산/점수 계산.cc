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

    pii arr[8];

    for (int i = 0; i < 8; i++) {
        cin >> arr[i].first;
        arr[i].second = i;
    }
    sort(arr, arr+8);
    int ans = 0;
    int num[5];
    for(int i = 3; i < 8; i++) {
        ans += arr[i].first;
        num[i-3] = arr[i].second;
    }
    sort(num, num+5);

    cout << ans << "\n";
    for(auto u : num) {
        cout << u+1 << " ";
    }

    return 0;
}