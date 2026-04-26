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
    cin >> n;
    vector<int> gn(n+1);
    for(int i = 2; i <= n; i++) {
        map<int,int> _m;
        for(int j = 1; j < i; j++) {
            _m[gn[j-1] ^ gn[i-1-j]] = 1;
        }
        while(_m[gn[i]]) gn[i]++;
    }

    cout << (gn[n] ? 1 : 2);

    return 0;
}