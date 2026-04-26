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
    vector<pair<string, string>> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i].second >> arr[i].first;
    }
    sort(all(arr));

    for(auto u : arr) {
        cout << u.second << " " << u.first << "\n";
    }

    return 0;
}