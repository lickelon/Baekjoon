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
    vector<string> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        reverse(arr[i].begin(), arr[i].end());
    }

    for(int i = 0; i <= arr[0].length(); i++) {
        set<string> _s;
        for(auto u : arr) {
            if(_s.find(u) == _s.end()) {
                _s.insert(u.substr(0, i));
            }
            else {
                break;
            }
        }
        if(_s.size() == n) {
            cout << i;
            return 0;
        }
    }

    return 0;
}