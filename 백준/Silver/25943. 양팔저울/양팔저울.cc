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
    
    int l, r;
    cin >> l >> r;
    for(int i = 2; i < n; i++) {
        int input;
        cin >> input;
        if(l <= r) l += input;
        else r += input;
    }

    int m[] = {100, 50, 20, 10, 5, 2, 1};
    int gap = abs(l-r);
    int ans = 0;
    while(gap) {
        for(auto e : m) {
            if(gap >= e) {
                gap -= e;
                break;
            }
        }
        ans++;
    }
    cout << ans;

    return 0;
}