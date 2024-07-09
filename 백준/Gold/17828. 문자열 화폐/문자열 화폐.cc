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

    int n, x;;
    cin >> n >> x;
    if(x < n || x > 26 * n) {
        cout << "!";
        return 0;
    }
    vector<int> arr(n);
    x -= n;
    for(int i = n-1; i >= 0; i--) {
        arr[i] += min(25, x);
        x -= min(25, x);
    }
    for(int i = 0; i < n; i++) {
        cout << (char)('A' + arr[i]);
    }

    return 0;
}