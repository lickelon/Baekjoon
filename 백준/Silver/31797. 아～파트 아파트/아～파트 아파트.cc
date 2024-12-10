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

    vector<pii> arr(m*2);
    for(int i = 0; i < m; i++) {
        cin >> arr[i*2].first >> arr[i*2+1].first;
        arr[i*2].second = arr[i*2+1].second = i+1;
    }
    sort(all(arr));
    cout << arr[(n-1)%(m*2)].second;

    return 0;
}