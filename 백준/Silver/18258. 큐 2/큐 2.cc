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
    int back = -1;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if(s == "push") {
            cin >> back;
            _q.push(back);
        }
        if(s == "front") {
            if(_q.empty()) cout << "-1\n";
            else cout << _q.front() << "\n";
        }
        if(s == "back") {
            if(_q.empty()) cout << "-1\n";
            else cout << back << "\n";
        }
        if(s == "pop") {
            if(_q.empty()) cout << "-1\n";
            else {
                cout << _q.front() << "\n";
                _q.pop();
            }
        }
        if(s == "size") {
            cout << _q.size() << "\n";
        }
        if(s == "empty") {
            cout << _q.empty() << "\n";
        }
    }

    return 0;
}