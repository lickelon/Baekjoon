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
    string s;
    cin >> s;
    
    int sum = 0;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == ')') {
            if(sum <= 0) {
                ans++;
            }
            sum -= 1;
        }
        else {
            sum += 1;
        }
    }
    ans *= 2;
    if(sum != 0) ans = -1;
    cout << ans;
    return 0;
}