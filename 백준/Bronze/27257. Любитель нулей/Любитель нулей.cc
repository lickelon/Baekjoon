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

    string s;
    cin >> s;
    int temp = 0;
    int ans = 0;
    for(auto u : s) {
        if(u == '0')
            temp += 1;
        else {
            ans += temp;
            temp = 0;
        }
    }
    cout << ans;

    return 0;
}