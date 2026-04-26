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

    int n, k;
    cin >> n >> k;

    vector<int> arr(k);

    int cnt = 0;
    for(int i = 1; cnt < n; i++) {
        if(i > k) i = k;
        for(int j = 0; j < i; j++) {
            arr[j]++;
            cnt++;
            if(cnt >= n) break;
        }
    }
    if(arr[k-1] == 0) {
        cout << -1;
    }
    else {
        cout << arr[0] - arr[k-1];
    }
    return 0;
}