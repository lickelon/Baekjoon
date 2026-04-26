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

    int b, c, d;
    cin >> b >> c >> d;
    vector<int> ba(b), ca(c), da(d);
    for(auto &u : ba) cin >> u;
    for(auto &u : ca) cin >> u;
    for(auto &u : da) cin >> u;

    sort(all(ba), greater<int>());
    sort(all(ca), greater<int>());
    sort(all(da), greater<int>());
    
    int sc = min({b,c,d});
    int ms = 0, ss = 0;
    for(auto u : ba) ms += u;
    for(auto u : ca) ms += u;
    for(auto u : da) ms += u;

    for(int i = 0; i < sc; i++) {
        ss += ba[i] + ca[i] + da[i];
    }
    cout << ms << "\n" << ms - ss/10;

    return 0;
}