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
    vector<int> arr(4);
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        arr[input] += 1;
    }
    int ans = 0;
    int t = min(arr[0], arr[3]);
    ans += t*3;
    arr[0] -= t;
    arr[3] -= t;
    t = min(arr[1], arr[2]);
    ans += t*3;
    arr[1] -= t;
    arr[2] -= t;
    t = min(arr[0], arr[2]);
    ans += t*2;
    arr[0] -= t;
    arr[2] -= t;
    t = min(arr[1], arr[3]);
    ans += t*2;
    arr[1] -= t;
    arr[3] -= t;
    t = min(arr[0], arr[1]);
    ans += t;
    arr[0] -= t;
    arr[1] -= t;
    t = min(arr[2], arr[3]);
    ans += t;
    arr[2] -= t;
    arr[3] -= t;
    cout << ans;
    return 0;
}