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
    vector<int> arr(n+1);
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'S') arr[i+1] = 1;
        arr[i+1] += arr[i];
    }

    for(int i = 1; i <= n; i++) {
        int idx = i;
        int left = i;
        int ans = 1;
        while(idx <= n) {
            left = i - arr[idx];
            if(left == 0) break;
            if(left > n - idx) break;
            idx += left;
            ans++;
        }
        cout << ans << " ";
    }

    return 0;
}