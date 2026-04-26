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
    sort(all(s));
    int cnt = 0;
    char arr[5] = {'B','I','M','O','S'};
    for(auto u : s) {
        if(u == arr[cnt]) cnt++;
        if(cnt == 5) break;
    }
    cout << (cnt==5 ? "YES" : "NO");

    return 0;
}