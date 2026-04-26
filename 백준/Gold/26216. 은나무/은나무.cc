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

    ll k, h, q;
    cin >> k >> h >> q;

    while(q--) {
        ll a, b;
        cin >> a >> b;
        ll ans = 0;
        ll div = k + 1;
        vector<ll> va;
        vector<ll> vb;

        while(a != 0 || b != 0){
            va.push_back(a % div);
            vb.push_back(b % div);
            a /= div;
            b /= div;
        }
        if(vb.size() > h) {
            cout << "-1\n";
            continue;
        }
        for(int i = 0; i < va.size(); i++) {
            if(va[i] != 0) {
                va[i] = -va[i];
                break;
            }
        }
        for(int i = 0; i < vb.size(); i++) {
            if(vb[i] != 0) {
                vb[i] = -vb[i];
                break;
            }
        }
        for(int i = 0; i < va.size(); i++) {
            if(va[i] != vb[i]) ans = (i + 1) * 2;
        }

        for(int i = 0; i < va.size(); i++) {
            if(va[i] != 0) break;
            ans--;
        }
        for(int i = 0; i < vb.size(); i++) {
            if(vb[i] != 0) break;
            ans--;
        }
        cout << max(ans, 0ll) << "\n";
    }

    return 0;
}