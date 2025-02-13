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

    int n;
    cin >> n;
    vector<int> u(n), v(n);
    for(int i = 0; i < n; i++) cin >> u[i] >> v[i];

    vector<int> um(u), uM(u), vm(v), vM(v);
    if(u[0] == 0) um[0] = INF;
    for(int i = 1; i < n; i++) {
        if(u[i] == 0) um[i] = um[i-1];
        else um[i] = min(um[i-1], u[i]);
        if(v[i] == 0) vM[i] = vM[i-1];
        else vM[i] = max(vM[i-1], v[i]);
    }
    if(v[n-1] == 0) vm[n-1] = INF;
    for(int i = n-2; i >= 0; i--) {
        if(u[i] == 0) uM[i] = uM[i+1];
        else uM[i] = max(uM[i+1], u[i]);
        if(v[i] == 0) vm[i] = vm[i+1];
        else vm[i] = min(vm[i+1], v[i]);
    }

    int ans = -2;
    for(int i = 0; i < n-1; i++) {
        if(um[i] > uM[i+1] && vM[i] < vm[i+1]) {
            ans = i;
        }
    }
    cout << ans+1;


    return 0;
}