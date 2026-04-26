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
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        ll sum = 0;
        for(int j = 0; j < m; j++) {
            int input;
            cin >> input;
            sum += input;
        }
        ans ^= sum;
    }
    if(ans == 0) cout << "ainta";
    else cout << "august14";

    return 0;
}