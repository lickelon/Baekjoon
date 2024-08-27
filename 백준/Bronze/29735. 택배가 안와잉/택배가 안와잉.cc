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
    //ios::sync_with_stdio(0);
    //cin.tie(0); cout.tie(0);

    string a, b;
    cin >> a >> b;
    int n, t;
    cin >> n >> t;
    int ta = ((a[0]-'0')*10+a[1]-'0')*60+(a[3]-'0')*10+a[4]-'0';
    int tb = ((b[0]-'0')*10+b[1]-'0')*60+(b[3]-'0')*10+b[4]-'0';
    int nd = (tb-ta-1)/t;
    cout << n / nd << "\n";
    int ln = n % nd + 1;
    int tt = ta + ln*t;
    printf("%02d:%02d", tt/60, tt%60);

    return 0;
}