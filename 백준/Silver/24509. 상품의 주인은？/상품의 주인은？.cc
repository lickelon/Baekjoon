#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

bool comp(pii&a, pii&b) {
    if(a.first == b.first) return a.second < b.second;
    return a.first > b.first;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<int> arr(n+1, 1);
    vector<pii> va;
    vector<pii> vb;
    vector<pii> vc;
    vector<pii> vd;
    for(int i = 0; i < n; i++) {
        int t, a, b, c, d;
        cin >> t >> a >> b >> c >> d;
        va.push_back({a, t});
        vb.push_back({b, t});
        vc.push_back({c, t});
        vd.push_back({d, t});
    }
    sort(all(va), comp);
    sort(all(vb), comp);
    sort(all(vc), comp);
    sort(all(vd), comp);
    for(int i = 0; i < 4; i++) {
        if(arr[va[i].second]) {
            cout << va[i].second << " ";
            arr[va[i].second] = 0;
            break;
        }
    }
    for(int i = 0; i < 4; i++) {
        if(arr[vb[i].second]) {
            cout << vb[i].second << " ";
            arr[vb[i].second] = 0;
            break;
        }
    }
    for(int i = 0; i < 4; i++) {
        if(arr[vc[i].second]) {
            cout << vc[i].second << " ";
            arr[vc[i].second] = 0;
            break;
        }
    }
    for(int i = 0; i < 4; i++) {
        if(arr[vd[i].second]) {
            cout << vd[i].second << " ";
            arr[vd[i].second] = 0;
            break;
        }
    }
    return 0;
}