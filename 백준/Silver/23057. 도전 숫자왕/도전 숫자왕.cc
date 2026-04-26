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
    vector<ll> arr(n);
    for(auto &u : arr) cin >> u;

    set<ll> _s;
    for(int i = 0; i < 1 << n; i++) {
        ll sum = 0;
        for(int j = 0; j < n; j++) {
            if((i >> j) & 1) {
                sum += arr[j];
            }
        }
        _s.insert(sum);
    }
    
    cout << *(_s.rbegin()) - (_s.size() - 1);

    return 0;
}