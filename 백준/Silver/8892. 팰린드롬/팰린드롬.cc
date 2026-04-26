#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

void solve() {
    int n;
    cin >> n;
    vector<string> arr(n);
    for(auto &u : arr) cin >> u;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) continue;
            string temp1 = arr[i] + arr[j];
            string temp2 = temp1;
            reverse(temp2.begin(), temp2.end());
            if(temp1 == temp2) {
                cout << temp1 << "\n";
                return;
            }
        }
    }
    cout << "0\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}