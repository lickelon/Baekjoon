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
    vector<pii> arr(n);
    for(auto &e : arr) cin >> e.first;
    for(auto &e : arr) cin >> e.second;

    reverse(all(arr));
    queue<int> _q;
    for(auto e : arr) {
        if(!e.first) _q.push(e.second);
    }

    int m;
    cin >> m;
    for(int i = 0; i < m; i++) {
        int input;
        cin >> input;
        _q.push(input);
        cout << _q.front() << " ";
        _q.pop();
    }

    return 0;
}