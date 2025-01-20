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
    priority_queue<int> player[11];
    for(int i = 0; i < n; i++) {
        int p, w;
        cin >> p >> w;
        player[p-1].push(w);
    }
    for(int i = 0; i < 11; i++) {
        if(player[i].empty()) continue;
        for(int j = 0; j < k; j++) {
            int temp = player[i].top(); player[i].pop();
            player[i].push(temp-1);
        }
    }
    int ans = 0;
    for(int i = 0; i < 11; i++) {
        player[i].push(0);
        ans += player[i].top();
    }
    cout << ans;

    return 0;
}