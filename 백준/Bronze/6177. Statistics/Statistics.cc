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
    ld ans = 0;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        ans += arr[i];
    }
    cout << ans / n << "\n";
    sort(all(arr));
    if(n % 2) {
        cout << arr[n/2];
    }
    else {
        ans = arr[n/2 - 1] + arr[n/2];
        ans /= 2;
        cout << ans;
    }

    return 0;
}