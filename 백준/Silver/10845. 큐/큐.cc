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
    queue<int> _q;
    int last = -1;
    while(n--) {
        string s;
        cin >> s;
        if(s == "push") {
            int x;
            cin >> x;
            _q.push(x);
            last = x;
        }
        if(s == "pop") {
            if(_q.empty()) {
                cout << -1 << "\n";
            }
            else {
                cout << _q.front() << "\n";
                _q.pop();
            }
        }
        if(s == "size") cout << _q.size() << "\n";
        if(s == "empty") cout << (_q.empty() ? 1 : 0) << "\n";
        if(s == "front") cout << (_q.empty() ? -1 : _q.front()) << "\n";
        if(s == "back") cout << (_q.empty() ? -1 : last) << "\n";
    }

    return 0;
}