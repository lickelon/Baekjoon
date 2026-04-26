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

    int T;
    cin >> T;
    while(T--) {
        int n, m;
        cin >> n >> m;
        ll x, y;
        x = y = 0;
        for(int i = 0; i < m; i++) {
            int input;
            cin >> input;
            x *= 10;
            x += input;
        }
        for(int i = 0; i < m; i++) {
            int input;
            cin >> input;
            y *= 10;
            y += input;
        }
        int divider = 1;
        for(int i = 0; i < m; i++) {
            divider *= 10;
        }
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        
        ll curr = 0;
        for(int i = 0; i < m; i++) {
            curr *= 10;
            curr += arr[i];
        }
        int ans = 0;
        for(int i = m; i < m + n; i++) {
            curr *= 10;
            curr %= divider;
            curr += arr[i%n];
            if(x <= curr && curr <= y) ans++;
        }
        cout << ans << "\n";
    }

    return 0;
}