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
    vector<tuple<int,int,int>> arr(n);
    for(auto &u : arr) {
        cin >> get<0>(u);
        cin >> get<1>(u);
        cin >> get<2>(u);
    }
    sort(all(arr));
    for(auto u : arr) {
        cout << get<0>(u) << " ";
        cout << get<1>(u) << " ";
        cout << get<2>(u) << "\n";
    }

    return 0;
}