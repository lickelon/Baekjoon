#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

ll gcd(ll a, ll b)
{
    if (!b) return a;
    return gcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    pll ma, mb;
    ma = mb = {0,0};
    for(int i = 0; i < 4; i++) {
        int a, b;
        cin >> a >> b;
        ma.first += a;
        ma.second += b;
    }
    for(int i = 0; i < 4; i++) {
        int a, b;
        cin >> a >> b;
        mb.first += a;
        mb.second += b;
    }

    ll ca, cb;
    ca = mb.second - ma.second;
    cb = mb.first - ma.first;
    ll da, db;
    da = cb*ma.second - ca*ma.first;
    db = cb * 4;
    ll gcdc = gcd(ca, cb);
    ca /= gcdc;
    cb /= gcdc;
    ll gcdd = gcd(da, db);
    da /= gcdd;
    db /= gcdd;

    if(cb < 0) {
        ca *= -1;
        cb *= -1;
    }
    if(cb == 1) {
        cout << ca << " ";
    }
    else {
        cout << ca << "/" << cb << " ";
    }

    if(db < 0) {
        da *= -1;
        db *= -1;
    }
    if(db == 1) {
        cout << da << " ";
    }
    else {
        cout << da << "/" << db << " ";
    }

    return 0;
}