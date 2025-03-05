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

    deque<int> _dq;
    while(n--) {
        int i;
        cin >> i;
        if(i == 1 || i == 2) {
            int x;
            cin >> x;
            if(i == 1) _dq.push_front(x);
            if(i == 2) _dq.push_back(x);
        }
        else if(i == 5) {
            cout << _dq.size() << "\n";
        }
        else if(i == 6) {
            cout << _dq.empty() << "\n";
        }
        else {
            if(_dq.empty()) {
                cout << "-1\n";
                continue;
            }
            if(i % 2 == 1) cout << _dq.front() << "\n";
            if(i % 2 == 0) cout << _dq.back() << "\n";
            if(i == 3) _dq.pop_front();
            if(i == 4) _dq.pop_back();
        }
    }

    return 0;
}