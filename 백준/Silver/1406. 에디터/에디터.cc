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

    string s;
    cin >> s;
    int n;
    cin >> n;
    stack<char> _prev, _next;
    for(auto u : s) {
        _prev.push(u);
    }
    for(int i = 0; i < n; i++) {
        string command;
        cin >> command;
        switch(command[0]) {
        case 'L':
            if(_prev.empty()) continue;
            _next.push(_prev.top());
            _prev.pop();
            break;
        case 'D':
            if(_next.empty()) continue;
            _prev.push(_next.top());
            _next.pop();
            break;
        case 'B':
            if(_prev.empty()) continue;
            _prev.pop();
            break;
        case 'P':
            string input;
            cin >> input;
            _prev.push(input[0]);
            break;
        }
    }
    while(!_prev.empty()) {
        _next.push(_prev.top());
        _prev.pop();
    }

    while(!_next.empty()) {
        cout << _next.top();
        _next.pop();
    }

    return 0;
}