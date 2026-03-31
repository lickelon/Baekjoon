#include <bits/stdc++.h>

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

    string d;
    cin >> d;

    string s[2];
    cin >> s[0] >> s[1];

    string flatten = s[0] + s[1][1] + s[1][0];

    int rot = 0;
    if(d == "S") rot = 0;
    if(d == "W") rot = 1;
    if(d == "N") rot = 2;
    if(d == "E") rot = 3;

    string real = flatten.substr(rot) + flatten.substr(0, rot);

    if(real == ".O.P") cout << "T";
    else if(real == "I.P.") cout << "F";
    else if(real == "O.P.") cout << "Lz";
    else cout << "?";

    return 0;
}