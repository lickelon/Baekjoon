#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

int main()
{
    //ios::sync_with_stdio(0);
    //cin.tie(0); cout.tie(0);
    //cout<<fixed; cout.precision(2);

    int t[2];

    for (int i = 0; i < 2; i++) {
		string s;
		cin >> s;
		ll h = (s[0] - '0') * 10 + s[1] - '0';
		ll m = (s[3] - '0') * 10 + s[4] - '0';
        ll _s = (s[6] - '0') * 10 + s[7] - '0';
		ll time = h * 60 * 60 + m * 60 + _s;
        t[i] = time;
	}
    int ans = t[1] - t[0];
    if(ans <= 0) {
        ans += 86400;
    }
    int h, m, s;
    s = ans % 60;
    ans /= 60;
    m = ans % 60;
    ans /= 60;
    h = ans;

    printf("%02d:%02d:%02d", h, m, s);

    return 0;
}