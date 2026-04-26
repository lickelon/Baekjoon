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
    vector<int> arr(50001);
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        arr[input]++;
    }
    int ans = 0;
    for(int i = 0; i <= 50000; i++) {
        ans = max(ans, arr[i]);
    }
    cout << ans;
    return 0;
}