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
    vector<int> arr(n+1, INF);
    arr[1] = 1;
    arr[0] = 0;

    for(int i = 2; i <= n; i++) {
        for(int j = 1; j * j <= i; j++) {
            arr[i] = min(arr[i], arr[i-j*j]+1);
        }
    }
    cout << arr[n];

    return 0;
}