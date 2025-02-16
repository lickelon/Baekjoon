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

    int n;
    cin >> n;
    vector<ll> arr(n);
    ll mult = 1;
    for(auto &e : arr) {
        cin >> e;
        mult *= e;
    }

    ll msum = 0;
    for(auto e : arr) {
        msum += mult / e;
    }
    ll g = gcd(msum, mult);
    cout << mult/g << "/" << msum/g;

    return 0;
}