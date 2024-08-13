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

    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for(auto &u : arr) cin >> u;
    int ans = 0;
    for(int i = 0; i < m; i++) {
        int input;
        cin >> input;
        bool check = false;
        for(int j = 0; j < m; j++) {
            if(arr[j] == input) check = true;
        }
        if(!check) ans++;
    }
    cout << ans;

    return 0;
}