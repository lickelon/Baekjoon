#include <bits/stdc++.h>

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
    char before = s[0];

    int cnt = 1;
    for(int i = 0; i < s.length(); i++) {
        if(before != s[i]) {
            cnt++;
        }
        before = s[i];
    }
    cout << cnt / 2;

    return 0;
}