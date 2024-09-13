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

    int n, l;
    cin >> n >> l;
    priority_queue<pii, vector<pii>, greater<pii>> _pq;
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        _pq.emplace(input, i);
        while(_pq.top().second <= i-l) _pq.pop();
        cout << _pq.top().first << " ";
    }

    return 0;
}