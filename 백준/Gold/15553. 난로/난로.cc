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

    int n, k;
    cin >> n >> k;

    int before, input;
    cin >> before;
    vector<int> gap(n-1);
    for(int i = 0; i < n-1; i++) {
        cin >> input;
        gap[i] = input - before - 1;
        before = input;
    }
    sort(all(gap));

    int ans = n;
    for(int i = 0; i < n-k; i++) {
        ans += gap[i];
    }
    cout << ans;

    return 0;
}