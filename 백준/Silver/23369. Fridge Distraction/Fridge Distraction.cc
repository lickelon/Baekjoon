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

    int n, t;
    cin >> n >> t;

    deque<int> _dq;

    for(int i = 0; i < n; i++) _dq.push_back(i);

    int ans = 0;
    vector<char> ask;
    while(t > 0)
    {
        ans++;
        if(t >= n)
        {
            int temp = _dq[n-1];
            ask.push_back('a' + temp);
            _dq.pop_back();
            _dq.push_front(temp);
            t -= n;
        }
        else
        {
            ask.push_back('a' + _dq[t-1]);
            t=0;
        }
    }

    cout << ans << "\n";
    for(auto u : ask)
    {
        cout << u << " ";
    }

    return 0;
}