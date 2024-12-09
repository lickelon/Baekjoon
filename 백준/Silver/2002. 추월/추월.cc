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
    map<string, int> _m;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        _m[s] = i+1;
    }

    vector<int> arr;
    set<int> _s;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for(auto e : arr) {
            if(e > _m[s]) {
                _s.insert(e);
            }
        }
        arr.emplace_back(_m[s]);
    }
    cout << _s.size();

    return 0;
}