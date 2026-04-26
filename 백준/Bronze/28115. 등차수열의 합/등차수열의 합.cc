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
    for(auto & u : arr) cin >> u;
    if(n == 1) {
        cout << "YES\n" << arr[0] << "\n0";
        return 0;
    }
    int gap = arr[1] - arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] - arr[i-1] != gap) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES\n";
    for(auto u : arr) cout << u << " ";
    cout << "\n";
    for(int i = 0; i < n; i++) cout << "0 ";
    return 0;
}