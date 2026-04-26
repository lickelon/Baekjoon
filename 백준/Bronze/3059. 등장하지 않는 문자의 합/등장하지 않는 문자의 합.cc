#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //cout<<fixed; cout.precision(2);

    int t;
    cin >> t;
    while(t--) {
        int ans = 2015;
        string s;
        cin >> s;
        int a[26] = {};
        for(auto u : s) {
            a[u-'A'] = 1;
        }
        for(int i = 0; i < 26; i++) {
            ans -= (i + 'A') * (a[i]);
        }
        cout << ans << "\n";
    }
    return 0;
}