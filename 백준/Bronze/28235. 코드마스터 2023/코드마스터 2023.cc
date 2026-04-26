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
    if(s == "SONGDO") cout << "HIGHSCHOOL";
    else if(s == "CODE") cout << "MASTER";
    else if(s == "2023") cout << "0611";
    else cout << "CONTEST";

    return 0;
}