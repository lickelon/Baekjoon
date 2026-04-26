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

    int n;
    cin >> n;
    while(n--) {
        string s;
        cin >> s;
        if(s == "Algorithm") cout << "204\n";
        if(s == "DataAnalysis") cout << "207\n";
        if(s == "ArtificialIntelligence") cout << "302\n";
        if(s == "CyberSecurity") cout << "B101\n";
        if(s == "Network") cout << "303\n";
        if(s == "Startup") cout << "501\n";
        if(s == "TestStrategy") cout << "105\n";
    }

    return 0;
}