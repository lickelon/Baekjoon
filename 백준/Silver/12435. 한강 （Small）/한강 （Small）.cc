#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

vector<int> nums[1000];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    vector<int> arr(1000001);
    vector<int> prime;
    for(int i = 2; i <= 1000000; i++) {
        if(arr[i]==0) prime.emplace_back(i);
        for(int j = i; j <= 1000000; j += i) {
            ++arr[j];
        }
    }

    for(int i = 1; i <= 1000000; i++) {
        nums[arr[i]].emplace_back(i);
    }

    int T;
    cin >> T;
    for(int i = 0; i < T; i++) {
        int n, m;
        cin >> n >> m;
        int ans = 0;
        vector<int> temp(nums[arr[n]]);
        for(auto u : temp) {
            if(u >= n) break;
            for(auto p : prime) {
                if(p * p > u) break;
                if(u % p == 0) {
                    if(p >= m) ans++;
                    break;
                }
            }
        }
        cout << "Case #" << i+1 << ": " << ans << "\n";
    }

    return 0;
}