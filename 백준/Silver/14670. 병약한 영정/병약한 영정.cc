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
    map<int, int> _m;
    for(int i = 0; i < n; i++) {
        int e, name;
        cin >> e >> name;
        _m[e] = name;
    }
    int r;
    cin >> r;
    for(int i = 0; i < r; i++) {
        int l;
        cin >> l;
        vector<int> ans;
        for(int i = 0; i < l; i++) {
            int input;
            cin >> input;
            if(_m.find(input) != _m.end()) {
                ans.emplace_back(_m[input]);
            }
        }
        if(ans.size() == l) {
            for(auto u : ans) {
                cout << u << " ";
            }
            cout << "\n";
        }
        else {
            cout << "YOU DIED\n";
        }
    }
    return 0;
}