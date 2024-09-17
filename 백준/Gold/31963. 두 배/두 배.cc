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
    vector<int> arr(n);
    for(auto &u : arr) cin >> u;
    vector<ll> mult(n);
    for(int i = 1; i < n; i++) {
        int a = arr[i-1], b = arr[i];
        if(a < b) {
            int cnt = 0;
            b -= 1;
            while(a < b) {
                a *= 2;
                cnt++;
            }
            mult[i] = -cnt;
        }
        else if(a > b){
            int cnt = 0;
            while(b < a) {
                b *= 2;
                cnt++;
            }
            mult[i] = cnt;
        }
        else {
            mult[i] = 0;
        }
    }

    ll ans = 0;
    ll curr = 0;
    for(int i = 1; i < n; i++) {
        curr += mult[i];
        curr = max(curr, 0ll);
        ans += curr;
    }
    cout << ans;

    return 0;
}