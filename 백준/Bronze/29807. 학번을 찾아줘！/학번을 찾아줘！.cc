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

    int arr[5] = {};
    int T;
    cin >> T;
    for(int i = 0; i < T; i++) {
        cin >> arr[i];
    }
    int ans = 0;
    ans += (arr[0] > arr[2] ? 508 : 108) * abs(arr[0]-arr[2]);
    ans += (arr[1] > arr[3] ? 212 : 305) * abs(arr[1]-arr[3]);
    ans += arr[4] * 707;
    cout << ans * 4763;
    return 0;
}