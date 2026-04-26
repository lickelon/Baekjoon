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

    ll arr[117] = {1, 1, 1, 1, };
    int n;
    cin >> n;
    for(int i = 4; i <= n; i++) {
        arr[i] = arr[i-1] + arr[i-3];
    }
    cout << arr[n];

    return 0;
}