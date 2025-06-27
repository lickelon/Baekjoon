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

    int n, m;
    cin >> n >> m;
    vector<ll> arr(m+1);
    arr[0] = 0;
    for(int i = 1; i <= m; i++) {
        ll a, b;
        cin >> a >> b;
        if(a == 1) arr[i] = (arr[i-1] + b) % n;
        if(a == 2) arr[i] = (arr[i-1] - b) % n;
        if(a == 3) arr[i] = arr[b];

        if(arr[i] < 0) arr[i] += n;
    }
    cout << arr[m]+1;

    return 0;
}