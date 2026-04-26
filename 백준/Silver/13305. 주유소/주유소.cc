#include <bits/stdc++.h>

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

    ll n;
    cin >> n;
    vector<ll> road(n);
    for (int i = 0; i < n-1; i++)
        cin >> road[i];
    
    for(int i = n-3; i >= 0; i--) {
        road[i] += road[i+1];
    }

    vector<ll> cost(n);
    for (int i = 0; i < n; i++)
        cin >> cost[i];
    
    ll oil = road[1];
    ll coc = cost[0];
    ll ans = 0;
    for(int i = 1; i < n; i++) {
        ans += (road[i-1] - road[i]) * coc;
        coc = min(coc, cost[i]);
    }

    cout << ans;


    return 0;
}