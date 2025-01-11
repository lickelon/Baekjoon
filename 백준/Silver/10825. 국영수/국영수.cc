#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

using info = tuple<string, int, int, int>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<info> arr(n);
    for(auto &[s, a, b, c] : arr) {
        cin >> s >> a >> b >> c;
    }
    sort(all(arr), [](info& a, info &b){
        auto [sa, aa, ba, ca] = a;
        auto [sb, ab, bb, cb] = b;
        if(aa != ab) return aa > ab;
        if(ba != bb) return ba < bb;
        if(ca != cb) return ca > cb;
        return sa < sb;
    });

    for(auto [s, a, b, c] : arr) cout << s << "\n";

    return 0;
}