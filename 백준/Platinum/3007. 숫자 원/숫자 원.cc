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
    vector<int> input(n);
    for(auto &u : input) cin >> u;
    vector<int> ans(n, INF);
    ans[0] = 0;
    int i = 3;
    int m = 0;
    while(ans[i % n] == INF) {
        ans[i % n] = ans[(i-3) % n] + input[(i-1) % n] - input[(i-2) % n];
        m = min(ans[i % n], m);
        i += 3;
    }
    if(n % 3 == 0) {
        for(int i = 0; i < n; i += 3) {
            ans[i] -= m - 1;
        }
        ans[1] = 0;
        i = 4;
        m = 0;
        while(ans[i % n] == INF) {
            ans[i % n] = ans[(i-3) % n] + input[(i-1) % n] - input[(i-2) % n];
            m = min(ans[i % n], m);
            i += 3;
        }
        for(int i = 1; i < n; i += 3) {
            ans[i] -= m - 1;
        }
        ans[2] = 0;
        i = 5;
        m = 0;
        while(ans[i % n] == INF) {
            ans[i % n] = ans[(i-3) % n] + input[(i-1) % n] - input[(i-2) % n];
            m = min(ans[i % n], m);
            i += 3;
        }
        for(int i = 2; i < n; i += 3) {
            ans[i] -= m - 1;
        }
        int add = input[1] - ans[0] - ans[1] - ans[2];
        for(int i = 0; i < n; i += 3) {
            ans[i] += add;
        }
    }
    else {
        int add = input[1] - (ans[0] + ans[1] + ans[2]);
        add /= 3;
        for(int i = 0; i < n; i ++) {
            ans[i] += add;
        }
    }
    for(auto u : ans) {
        cout << u << "\n";
    }

    return 0;
}