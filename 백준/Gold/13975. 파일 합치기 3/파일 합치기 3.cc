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
        int n;
        cin >> n;
        priority_queue<ll> _pq;
        ll ans = 0;
        for(int i = 0; i < n; i++) {
            int input;
            cin >> input;
            _pq.push(-input);
        }
        while(_pq.size() > 1) {
            ll a = _pq.top(); _pq.pop();
            ll b = _pq.top(); _pq.pop();
            ans += -(a+b);
            _pq.push(a+b);
        }
        cout << ans << "\n";
    }

    return 0;
}