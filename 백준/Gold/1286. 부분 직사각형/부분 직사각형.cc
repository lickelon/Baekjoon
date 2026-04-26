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

    int n, m;
    cin >> n >> m;
    vector<ll> arr(26);
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for(int j = 0; j < m; j++) {
            int u = i+1;
            int d = n-i;
            int l = j+1;
            int r = m-j;
            arr[s[j]-'A'] += (u+n)*d*(l+m)*r;
            arr[s[j]-'A'] += (u+n)*d*l*(r+m);
            arr[s[j]-'A'] += u*(d+n)*(l+m)*r;
            arr[s[j]-'A'] += u*(d+n)*l*(r+m);
        }
    }

    for(auto u : arr) cout << u << "\n";

    return 0;
}