#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

bool parent(int a, int b) {
    while(b != 0 && a < b) b /= 2;
    return a == b;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    int k, p;
    cin >> k >> p;

    vector<int> ans(n+1);
    int l = 1, r = k+1;
    for(int i = 1; i <= n; i++) {
        if(i < p && parent(i, p)) {
            if(l == k) {
                cout << -1;
                return 0;
            }
            ans[i] = l++;
        }
        if(i == p) ans[i] = k;
        if(p < i && parent(p, i)) {
            if(r == n+1) {
                cout << -1;
                return 0;
            }
            ans[i] = r++;
        }
    }
    for(int i = 1; i <= n; i++) {
        if(ans[i] == 0) {
            if(l < k)ans[i] = l++;
            else ans[i] = r++;
        }
    }
    for(int i = 1; i <= n; i++) cout << ans[i] << "\n";

    return 0;
}