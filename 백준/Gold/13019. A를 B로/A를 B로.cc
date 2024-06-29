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
    int n = a.length();
    reverse(all(a));
    reverse(all(b));
    int cnt = 0, idx = 0;
    for(int i = 0; i < n; i++) {
        while(idx < n && b[i] != a[idx]) {
            idx++;
        }
        if(idx == n) break;
        cnt++;
        idx++;
    }
    sort(all(a));
    sort(all(b));
    if(a != b) cout << -1;
    else cout << n - cnt;
    
    return 0;
}