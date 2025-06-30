#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF

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
    vector<int> arr(101);
    for(int i = 0; i < n; i++) {
        int input[3];
        for(auto &e : input) cin >> e;
        for(auto e : input) arr[e]++;
    }

    int ans = 0;
    for(int i = 1; i <= 100; i++) {
        for(int j = i+1; j <= 100; j++) {
            for(int k = j+1; k <= 100; k++) {
                vector<int> check(101);
                check[i] = check[j] = check[k] = 1;
                for(int x = 100; x >= 1; x--) {
                    if(arr[x] >= 2) continue;
                    if(arr[x] == 1) {
                        if(!check[x]) break;
                    }
                    if(arr[x] == 0) {
                        if(check[x]) {
                            ans++;
                            break;
                        }
                    }
                }
            }
        }
    }
    cout << ans;

    return 0;
}