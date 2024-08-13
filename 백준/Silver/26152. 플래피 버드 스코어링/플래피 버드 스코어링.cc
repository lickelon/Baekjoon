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
    for(auto &u : arr) cin >> u;
    for(auto &u : arr) {
        int input;
        cin >> input;
        u -= input;
    }
    for(int i = 1; i < n; i++) {
        arr[i] = min(arr[i], arr[i-1]);
    }

    int q;
    cin >> q;
    for(int i = 0; i < q; i++) {
        int input;
        cin >> input;
        cout << n - (lower_bound(arr.rbegin(), arr.rend(), input) - arr.rbegin()) << "\n";
    }

    return 0;
}