#include <bits/stdc++.h>

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

    int a, b;
    int n;
    cin >> a >> b;
    cin >> n;
    int ans = abs(b-a);
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        ans = min(ans, abs(temp-b)+1);
    }
    cout << ans;
    return 0;
}