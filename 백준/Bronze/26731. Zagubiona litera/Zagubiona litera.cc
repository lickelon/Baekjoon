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

    int a[26] = {};
    string s;
    cin >> s;
    for(auto u : s) {
        a[u - 'A'] = 1;
    }
    for(int i = 0; i < 26; i++) {
        if(!a[i]) cout << (char)(i+'A');
    }

    return 0;
}