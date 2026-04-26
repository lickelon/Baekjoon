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

bool compare(const pii &a, const pii &b)
{
    if(a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

inline void solve()
{
    int n;
    cin >> n;

    vector<pii> v(n);
    for (int i = 0; i < n; i++){
        int d, s, e;
        cin >> d >> s >> e;
        v[i].first = d*10000+s;
        v[i].second = d*10000+e;
    }
    
    sort(v.begin(), v.end(), compare);

    int ans = 0;
    int end = 0;
    for(int i = 0; i < n; i++) {
        if(v[i].first >= end) {
            ans++;
            end = v[i].second;
        }
    }
    
    cout << ans << "\n\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //cout.fixed; cout.precision(15);

    int T;
    cin >> T;

    for(int i = 0; i < T; i++)
    {
        cout << "Scenario #" << i + 1 << ":\n";
        solve();
    }

    return 0;
}