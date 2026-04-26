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

    string a, b;
    cin >> a >> b;
    for(auto &u : a) if(u == '6') u = '5';
    for(auto &u : b) if(u == '6') u = '5';

    cout << stoi(a) + stoi(b) << " ";

    for(auto &u : a) if(u == '5') u = '6';
    for(auto &u : b) if(u == '5') u = '6';

    cout << stoi(a) + stoi(b);

    return 0;
}