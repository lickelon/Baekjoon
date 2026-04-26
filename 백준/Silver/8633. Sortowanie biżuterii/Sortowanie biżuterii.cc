#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

bool comp(string& a, string & b) {
    if(a.length() == b.length()) {
        return a < b;
    }
    else return a.length() < b.length();
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<string> arr(n);
    for(auto &u : arr) cin >> u;
    sort(all(arr), comp);
    for(auto u : arr) cout << u << "\n";
    
    return 0;
}