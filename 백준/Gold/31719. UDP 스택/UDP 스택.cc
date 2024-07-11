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
        int n;
        cin >> n;
        vector<int> arr(n);
        for(auto &u : arr) cin >> u;

        bool ans = true;
        int target = 1;
        pii st[2] = {};
        for(int i = 0; i < n; i++) {
            if(arr[i] == target) {
                target += 1;
                continue;
            }
            if(st[0].first == target) {
                target = st[0].second + 1;
                st[0] = st[1];
                st[1] = {0,0};
            }
            else if(st[1].first == target) {
                target = st[1].second + 1;
                st[1] = {0,0};
            }
            bool check = true;
            for(int j = 0; j < 2; j++) {
                if(st[j].first == 0) {
                    st[j].first = st[j].second = arr[i];
                    check = false;
                    break;
                }
                else if(st[j].second + 1 == arr[i]) {
                    st[j].second += 1;
                    check = false;
                    break;
                }
            }
            if(check) {
                ans = false;
                break;
            }
        }
        cout << (ans ? "YES" : "NO") << "\n";
    }

    return 0;
}