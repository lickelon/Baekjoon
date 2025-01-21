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

    deque<int> _dq;
    int n;
    cin >> n;
    while(n--) {
        string inst;
        cin >> inst;
        if(inst == "push_front") {
            int input;
            cin >> input;
            _dq.push_front(input);
        }
        if(inst == "push_back") {
            int input;
            cin >> input;
            _dq.push_back(input);
        }
        if(inst == "pop_front") {
            if(_dq.empty()) cout << "-1\n";
            else {
                cout << _dq.front() << "\n";
                _dq.pop_front();
            }
        }
        if(inst == "pop_back") {
            if(_dq.empty()) cout << "-1\n";
            else {
                cout << _dq.back() << "\n";
                _dq.pop_back();
            }
        }
        if(inst == "size") {
            cout << _dq.size() << "\n";
        }
        if(inst == "empty") {
            cout << (int)_dq.empty() << "\n";
        }
        if(inst == "front") {
            cout << (_dq.empty() ? -1 : _dq.front()) << "\n";
        }
        if(inst == "back") {
            cout << (_dq.empty() ? -1 : _dq.back()) << "\n";
        }
    }

    return 0;
}