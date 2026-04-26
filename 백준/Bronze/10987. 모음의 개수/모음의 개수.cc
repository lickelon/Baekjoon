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

    char v[] = "aeiou";
    string s;
    cin >> s;
    int ans = 0;
    for(auto i : s) {
        for(auto j : v) {
            if(i==j) ans++;
        }
    }
    cout << ans;

    return 0;
}