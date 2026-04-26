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

    int n, k;
    cin >> n >> k;
    queue<int> _q;
    for(int i = 1; i <= n; i++) {
        _q.push(i);
    }

    while(_q.size() >= k) {
        int t = _q.front();
        for(int i = 0; i < k; i++) {
            _q.pop();
        }
        _q.push(t);
    }

    cout << _q.front();

    return 0;
}