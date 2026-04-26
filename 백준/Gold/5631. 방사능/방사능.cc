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

ll dist_sq(pll a, pll b) {
    ll dx = a.first - b.first;
    ll dy = a.second - b.second;
    
    return dx*dx + dy*dy; 
}

inline int solve(int T)
{
    int N;
    cin >> N;
    if(!N) return 0;

    cout << "Case " << T << ":\n";

    vector<pll> arr(N);
    for (int i = 0; i < N; i++)
        cin >> arr[i].first >> arr[i].second;
    
    pll a, b;
    int q;
    cin >> a.first >> a.second >> b.first >> b.second >> q;

    vector<ll> distA(N), distB(N);
    for (int i = 0; i < N; i++) {
        distA[i] = dist_sq(a, arr[i]);
        distB[i] = dist_sq(b, arr[i]);
    }

    sort(distA.begin(), distA.end());
    sort(distB.begin(), distB.end());

    for (int i = 0; i < q; i++) {
        ll r1, r2;
        cin >> r1 >> r2;

        r1 = r1*r1;
        r2 = r2*r2;

        int eq1 = upper_bound(distA.begin(), distA.end(), r1) - distA.begin();
        int eq2 = upper_bound(distB.begin(), distB.end(), r2) - distB.begin();

        int ans = N - eq1 - eq2;
        ans = max(ans, 0);
        cout << ans <<"\n";
    }

    return 1;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //cout.fixed; cout.precision(15);

    int T = 1;

    while(solve(T++));

    return 0;
}