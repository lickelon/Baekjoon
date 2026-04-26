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

    int h, w;
    cin >> h >> w;
    int cnt = 0;
    int cnt2 = 0;
    for(int i = 0; i < h; i++) {
        string s;
        cin >> s;
        for(auto c : s) {
            if(c == '0') cnt++;
            if(c == '1') cnt2++;
        }
    }
    cout << min(cnt, cnt2);

    return 0;
}