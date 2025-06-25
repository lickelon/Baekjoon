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

    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for(auto &e : arr) cin >> e;
    sort(all(arr));

    for(int i = 0; i < n-1; i++) {
        if(arr[i] + arr[i+1] > x) {
            cout << i+1;
            return 0;
        }
    }
    cout << n;
    return 0;
}