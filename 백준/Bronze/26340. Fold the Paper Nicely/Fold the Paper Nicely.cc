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

    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << "Data set: " << a << " " << b << " " << c <<"\n";
        priority_queue<int> _pq;
        _pq.push(a);
        _pq.push(b);
        while(c--) {
            _pq.push(_pq.top() / 2);
            _pq.pop();
        }
        a = _pq.top(); _pq.pop();
        b = _pq.top();
        cout << a << " " << b << "\n\n";
    }

    return 0;
}