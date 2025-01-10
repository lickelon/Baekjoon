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
    for(auto &e : arr) cin >> e;

    int ans = 0;
    for(int s = 0; s < 4; s++) {
        int e = s + n-4;
        int sum = 0;
        int mult = 1;
        for(int i = 0; i < n; i++) {
            if(s <= i && i <= e) mult *= arr[i];
            else sum += arr[i];
        }
        sum += mult;
        ans = max(ans, sum);
    }
    cout << ans;

    return 0;
}