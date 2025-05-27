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
    vector<array<int, 3>> arr(n);
    for(auto &e : arr) {
        cin >> e[0] >> e[1] >> e[2];
    }
    sort(all(arr), [](array<int, 3> a, array<int, 3> b) {
        return a[2] > b[2];
    });
    cout << arr[0][0] << " " << arr[0][1] << "\n";
    cout << arr[1][0] << " " << arr[1][1] << "\n";
    if(arr[0][0] != arr[1][0]) {
        cout << arr[2][0] << " " << arr[2][1] << "\n";
        return 0;
    }
    for(int i = 2; i < n; i++) {
        if(arr[i][0] == arr[0][0]) continue;
        cout << arr[i][0] << " " << arr[i][1] << "\n";
        break;
    }
    return 0;
}