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

    int T;
    cin >> T;
    while(T--) {
        set<int> _s;
        int n;
        cin >> n;
        for(int i = 0; i < n; i++) {
            int input;
            cin >> input;
            _s.insert(input);
        }

        cin >> n;
        for(int i = 0; i < n; i++) {
            int input;
            cin >> input;
            if(_s.find(input) != _s.end()) {
                cout << 1;
            }
            else {
                cout << 0;
            }
            cout << "\n";
        }
    }
    return 0;
}