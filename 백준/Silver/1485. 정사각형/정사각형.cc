#include <bits/stdc++.h>

#define INF 0x7FFFFFFF
#define PI 3.141592653589793

//#define _ << " " <<
//#define endl "\n"

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

inline void solve()
{
    vector<pii> dots(4);
    for(int i = 0; i < 4; i++) {
        cin >> dots[i].first >> dots[i].second;
    }

    vector<int> dist;
    for(int i = 0; i < 3; i++) {
        for(int j = i + 1; j < 4; j++) {
            int d1 = dots[i].first - dots[j].first;
            int d2 = dots[i].second - dots[j].second;
            dist.push_back(d1*d1 + d2*d2);
        }
    }
    
    sort(dist.begin(), dist.end());

    if(dist[0] == dist[3] && dist[4] == dist[5]) {
        cout << "1\n";
        return;
    }

    cout << "0\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //cout.fixed; cout.precision(15);

    int T;
    cin >> T;

    while(T--)
    {
        solve();
    }

    return 0;
}