#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int cnt = 0;
    for(int i = 0; i < 9; i++) {
        string s;
        cin >> s;
        if(s == "Lion") cnt++;
    }
    cout << (cnt >= 5 ? "Lion" :  "Tiger");

    return 0;
}