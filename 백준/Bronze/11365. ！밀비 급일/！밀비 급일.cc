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

    string str;
    while(getline(cin, str)) {
        if(str == "END") break;
        reverse(str.begin(), str.end());
        cout << str << "\n";
    }

    return 0;
}