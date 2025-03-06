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

    int T;
    cin >> T;
    while(T--) {
        ll a, b;
        cin >> a >> b;
        ll res = a*b;
        string sa = to_string(a);
        string sb = to_string(b);
        if(sa.length() < sb.length()) swap(sa, sb);
        while(sa.length() > sb.length()) sb = "1" + sb;
        string sres = "";
        for(int i = 0; i < sa.length(); i++) {
            ll temp = (sa[i]-'0') * (sb[i]-'0');
            sres += to_string(temp);
        }
        cout << (res == stoll(sres)) << "\n";
    }

    return 0;
}