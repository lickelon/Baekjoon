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
    int x;
    cin >> x;
    int before;
    cin >> before;
    int ans = INF;
    for(int i = 1; i < n; i++) {
        int input;
        cin >> input;
        ans = min(ans, input + before);
        before = input;
    }
    cout << ans * x;

    return 0;
}