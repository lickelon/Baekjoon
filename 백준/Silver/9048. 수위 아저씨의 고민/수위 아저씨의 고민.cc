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

    int T;
    cin >> T;
    while(T--) {
        int F, R, N;
        cin >> F >> R >> N;
        vector<deque<int>> arr(F+1, deque<int>());
        for(int i = 0; i < N; i++) {
            int a, b;
            cin >> a >> b;
            arr[a].emplace_back(b);
        }
        int ans = F * 2 + R + 1;
        for(int i = 1; i <= F; i++) {
            sort(all(arr[i]));
            arr[i].push_front(0);
            arr[i].push_back(R+1);
            int m = INF;
            for(int j = 0; j < arr[i].size() - 1; j++) {
                m = min(m, arr[i][j] + (R+1 - arr[i][j+1]));
            }
            ans += m * 2;
        }
        cout << ans << "\n";
    }

    return 0;
}