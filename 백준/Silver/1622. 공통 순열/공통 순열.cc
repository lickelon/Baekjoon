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

    string s, t;
    while(getline(cin, s) && getline(cin, t)) {
        for(int i = 0; i < 26; i++) {
            int ca, cb;
            ca = cb = 0;
            for(auto c : s) {
                if(c-'a' == i) ca++;
            }
            for(auto c : t) {
                if(c-'a' == i) cb++;
            }
            int cnt = min(ca,cb);
            while(cnt--) cout << (char)('a'+i);
        }
        cout << "\n";
    }

    return 0;
}