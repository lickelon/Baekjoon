#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

ll gcd(ll a, ll b)
{
    if (!b) return a;
    return gcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    queue<int> _q;

    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        _q.push(i+1);
    }

    while(_q.size() > 1)
    {
        _q.pop();
        _q.push(_q.front());
        _q.pop();
    }

    cout << _q.front();

    return 0;
}