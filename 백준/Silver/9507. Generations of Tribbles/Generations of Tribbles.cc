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

    ll arr[68] = {1, 1, 2, 4, };
    for(int i = 4; i <= 67; i++) {
        arr[i] = arr[i-1] + arr[i-2] + arr[i-3] + arr[i-4];
    }

    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        cout << arr[n] << "\n";
    }

    return 0;
}