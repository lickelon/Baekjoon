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
    vector<int> arr2(n);
    for(auto &i : arr) cin >> i;
    for(auto &i : arr2) cin >> i;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] <= arr2[i]) ans++;
    }
    cout << ans;

    return 0;
}