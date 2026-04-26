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
    for(int i = 0; i < T; i++) {
        int n;
        cin >> n;
        vector<int> v1(n);
        vector<int> v2(n);
        for(auto &u : v1) cin >> u;
        for(auto &u : v2) cin >> u;
        sort(all(v1));
        int ans = INF;
        do {
            int temp = 0;
            for(int i = 0; i < n; i++) {
                temp += v1[i] * v2[i];
            }
            ans = min(ans, temp);
        } while(next_permutation(all(v1)));
        cout << "Case #" << i+1 <<": " << ans << "\n";
    }

    return 0;
}