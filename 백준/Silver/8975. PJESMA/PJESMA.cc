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
        string input;
        cin >> input;
        _m[input] = 0;
    }

    int m;
    cin >> m;
    int cnt = 0;
    for(int i = 0; i < m; i++) {
        string input;
        cin >> input;
        if(_m.find(input) != _m.end()) {
            _m[input]++;
            if(_m[input] == 1) cnt++;
            if(cnt*2 >= n) {
                cout << i+1;
                break;
            }
        }
    }
    return 0;
}