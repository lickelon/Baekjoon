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
    vector<ll> arr(n-1);
    ll p;
    cin >> p;
    for(auto &u : arr) cin >> u;
    sort(all(arr));

    for(auto u : arr) {
        if(u < p) {
            p += u;
        }
        if(p <= u) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";

    return 0;
}