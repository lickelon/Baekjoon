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

    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for(auto &u: arr) cin >> u;
    vector<int> amount(n+1);
    for(int i = 0; i < m; i++) {
        int a, b, k;
        cin >> a >> b >> k;
        amount[a-1] += k;
        amount[b] -= k;
    }

    for(int i = 1; i <= n; i++) {
        amount[i] += amount[i-1];
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] + amount[i] << " ";
    }

    return 0;
}