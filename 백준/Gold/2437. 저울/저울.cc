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
    sort(all(arr));

    int sum = 0;
    for(auto u : arr) {
        if(sum + 1 < u) {
            break;
        }
        sum += u;
    }
    cout << sum + 1;

    return 0;
}