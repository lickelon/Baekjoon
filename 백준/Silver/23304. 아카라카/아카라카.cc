#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

bool check(string s) {
    int n = s.length();
    if(n == 1) return true;
    for(int i = 0; i < n/2; i++) {
        if(s[i] != s[n-i-1]) return false;
    }
    return check(s.substr(0, n/2)) & check(s.substr(n-n/2, n/2));
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s;
    cin >> s;

    cout << (check(s) ? "AKARAKA" : "IPSELENTI");
    return 0;
}