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

    int n;
    int ans = 0;
    bool flag = false;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        ans ^= a;
        if(a>1) flag = true;
    }

    if(flag) cout << (ans ? "koosaga" : "cubelover");
    else cout << (!ans ? "koosaga" : "cubelover");

    return 0;
}