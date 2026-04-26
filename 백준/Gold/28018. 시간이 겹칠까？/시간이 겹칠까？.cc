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
    int arr[1000002] = {};
    for(int i = 0; i < n; i++) {
        int s, e;
        cin >> s >> e;
        arr[s] += 1;
        arr[e+1] -= 1;
    }

    for(int i = 1; i < 1000002; i++) {
        arr[i] += arr[i-1];
    }

    int q;
    cin >> q;
    for(int i = 0; i < q; i++) {
        int x;
        cin >> x;
        cout << arr[x] << "\n";
    }

    return 0;
}