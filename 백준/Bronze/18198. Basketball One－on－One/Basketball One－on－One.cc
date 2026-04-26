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
    int a = 0, b = 0;
    for(int i = 0; i < s.length(); i += 2) {
        if(s[i] == 'A') a += s[i+1];
        else b += s[i+1];
    }
    cout << (a>b?"A":"B");

    return 0;
}