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
    int ans = 0;
    while(n--) {
        string s;
        cin >> s;
        if(s == "Poblano") ans += 1500;
        if(s == "Mirasol") ans += 6000;
        if(s == "Serrano") ans += 15500;
        if(s == "Cayenne") ans += 40000;
        if(s == "Thai") ans += 75000;
        if(s == "Habanero") ans += 125000;
    }
    cout << ans;

    return 0;
}