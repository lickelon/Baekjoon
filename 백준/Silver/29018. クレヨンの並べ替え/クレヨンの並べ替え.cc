#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

bool comp(char& a, char& b) {
    if((int)a>>5 == (int)b>>5) {
        return a < b;
    }
    return (int)a>>5 > (int)b>>5;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    while(true) {
        string s;
        cin >> s;
        if(s == "#") break;
        sort(all(s), comp);
        cout << s << "\n";
    }


    return 0;
}