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

    int n, m;
    cin >> n >> m;
    vector<int> arr(n+1);
    arr[0] = 1;
    arr[1] = 1;
    for(int i = 2; i <= n; i++) {
        arr[i] = arr[i-1];
        if(i - m >= 0) arr[i] += arr[i-m];
        arr[i] %= 1000000007;
    }

    cout << arr[n];

    return 0;
}