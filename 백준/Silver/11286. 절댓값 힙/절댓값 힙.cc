#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

struct comp {
    bool operator()(int a, int b) {
        if(abs(a) == abs(b)) return a > b;
        return abs(a) > abs(b);
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    priority_queue<int, vector<int>, comp> _pq;

    while(n--) {
        int input;
        cin >> input;
        if(input == 0) {
            if(_pq.empty()) cout << "0\n";
            else {
                cout << _pq.top() << "\n";
                _pq.pop();
            }
        }
        else {
            _pq.push(input);
        }
    }

    return 0;
}