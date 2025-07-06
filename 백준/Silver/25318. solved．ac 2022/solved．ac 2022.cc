#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

pll parse_input(string s) {
    tm t;
    t.tm_year = stoi(s.substr(0, 4)) - 1900;
    t.tm_mon = stoi(s.substr(5, 2))-1;
    t.tm_mday = stoi(s.substr(8, 2));
    t.tm_hour = stoi(s.substr(11, 2));
    t.tm_min = stoi(s.substr(14, 2));
    t.tm_sec = stoi(s.substr(17, 2));

    pll ret;
    ret.first = mktime(&t);
    ret.second = stoi(s.substr(20, 2));

    return ret;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    if(n == 0) {
        cout << 0;
        return 0;
    }

    string s;
    getline(cin, s);
    
    vector<pll> arr(n);
    for(int i = 0; i < n; i++) {
        getline(cin, s);
        arr[i] = parse_input(s);
    }

    double div = 365 * 24 * 60 * 60;
    vector<ld> p(n);
    for(int i = 0; i < n; i++) {
        p[i] = max(pow(0.5, (arr[n-1].first - arr[i].first)/div), pow(0.9, n-1-i));
    }

    ld xa = 0, xb = 0;
    for(int i = 0; i < n; i++) {
        xa += p[i] * arr[i].second;
        xb += p[i];
    }
    ld ans = xa / xb;

    cout << (int)(ans+0.5);

    return 0;
}