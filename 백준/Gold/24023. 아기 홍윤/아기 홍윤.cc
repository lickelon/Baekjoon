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
    vector<int> arr(n);
    for(auto &u : arr) cin >> u;

    int s, curr;
    s = curr = 0;
    for(int i = 0; i < n; i++) {
        if((k | arr[i]) > k) {
            curr = 0;
            s = i+1;
            continue;
        }
        curr |= arr[i];
        if(curr == k) {
            cout << s+1 << " " << i+1 << "\n";
            return 0;
        }
    }
    cout << -1;

    return 0;
}