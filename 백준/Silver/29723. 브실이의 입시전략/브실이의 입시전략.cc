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

    int n, m, k;
    cin >> n >> m >> k;

    map<string, int> _m;
    for(int i = 0; i < n; i++) {
        string s;
        int p;
        cin >> s >> p;
        _m[s] = p;
    }

    int ans = 0;
    for(int i = 0; i < k; i++) {
        string s;
        cin >> s;
        ans += _m[s];
        _m[s] = -1;
    }

    vector<int> arr;
    for(auto u : _m) {
        if(u.second == -1) continue;
        arr.emplace_back(u.second);
    }
    sort(all(arr));
    int sum = 0;
    for(int i = 0; i < m - k; i++) {
        sum += arr[i];
    }
    cout << ans + sum << " ";

    sum = 0;
    for(int i = 0; i < m - k; i++) {
        sum += arr[arr.size() - i - 1];
    }
    cout << ans + sum << " ";

    return 0;
}