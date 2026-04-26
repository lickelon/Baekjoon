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
    if(n == 3) {
        vector<pii> arr(n);
        for(int i = 0; i < n; i++) {
            int a[2];
            cin >> a[0] >> a[1];
            sort(a, a + 2);
            arr[i] = {a[0], a[1]};
        }
        sort(all(arr));
        int ans = 0;
        for(auto u : arr) {
            ans *= 100;
            ans += u.first * 10 + u.second;
        }
        if(ans == 131434) cout << "Wa-pa-pa-pa-pa-pa-pow!";
        else cout << "Woof-meow-tweet-squeek";
    }
    else cout << "Woof-meow-tweet-squeek";

    return 0;
}