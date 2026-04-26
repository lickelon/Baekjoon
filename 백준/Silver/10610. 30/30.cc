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
    int sum = 0;
    sort(s.rbegin(), s.rend());
    for(auto u : s) sum += u - '0';
    if(sum % 3 == 0 && s.back() == '0') {
        cout << s;
    }
    else {
        cout << -1;
    }

    return 0;
}