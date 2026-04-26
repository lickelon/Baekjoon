#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

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

    string s;
    cin >> s;
    //assert(s != "6789678");
    int n = s.length();
    vector<int> arr(n+1);
    for(int i = 0; i < n; i++) {
        arr[i+1] = s[i] - '0';
        arr[i+1] += arr[i];
    }

    int ans = 0;
    for(int l = 0; l <= n; l++) {
        for(int r = l; r <= n; r += 2) {
            if(arr[r]-arr[l] == (arr[(r+l)/2]-arr[l])*2) {
                ans = max(ans, r-l);
            }
        }
    }
    cout << ans;

    return 0;
}