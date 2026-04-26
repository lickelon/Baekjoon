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

    cout.precision(6);
    cout << fixed;

    int n, w;
    cin >> n >> w;

    vector<int> arr(n+1);
    for(int i = 0; i < n-1; i++) {
        int a, b;
        cin >> a >> b;
        arr[a]++;
        arr[b]++;
    }

    int cnt = 0;
    for(int i = 2; i <= n; i++) {
        if(arr[i] == 1) cnt++;
    }

    cout << ((ld)w / cnt);

    return 0;
}