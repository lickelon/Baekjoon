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

    vector<ld> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(all(arr));

    ld sum = 0;
    for(int i = k; i < n-k; i++) {
        sum += arr[i];
    }
    cout.precision(2);
    cout << fixed << sum / (n-k*2) + 1e-13 << "\n";

    for(int i = 0; i < k; i++) {
        arr[i] = arr[k];
        arr[n-i-1] = arr[n-k-1];
    }
    sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << sum / n + 1e-13;

    return 0;
}