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

    int n;
    cin >> n;
    vector<pii> arr(n);
    for(auto &[a, b] : arr) cin >> a >> b;

    int curr = 0;
    for(auto [a, b] : arr) {
        int t = curr % (a+b);
        if(t < b) {
            curr += b - t;
        }
        curr += 1;
    }
    cout << curr;

    return 0;
}