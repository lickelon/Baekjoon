#include <bits/stdc++.h>

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
    for(int i = 1; i <= n; i++) {
        _q.push(i);
    }

    while(!_q.empty()) {
        cout << _q.front() << " ";
        _q.pop();
        _q.push(_q.front());
        _q.pop();
    }

    return 0;
}