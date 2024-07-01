#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

struct compare{
    bool operator()(pii &a, pii &b) {
        return a.first*b.second > b.first*a.second;
    }
};

ll gcd(ll a, ll b)
{
    if (!b) return a;
    return gcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int m, k;
    cin >> m >> k;
    priority_queue<pii, vector<pii>, compare> _pq;
    for(int i = 2; i <= m; i++) {
        _pq.push({1, i});
    }

    int idx = 1;
    while(!_pq.empty() && idx <= k) {
        pii curr = _pq.top(); _pq.pop();
        if(curr.first + 1 < curr.second) _pq.push({curr.first+1, curr.second});
        if(gcd(curr.first, curr.second) != 1) {
            continue;
        }
        if(idx == k) {
            cout << curr.first << " " << curr.second;
            return 0;
        }
        idx++;
    }

    cout << -1;
    return 0;
}