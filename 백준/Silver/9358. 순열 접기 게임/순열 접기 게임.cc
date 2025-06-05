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

    int T;
    cin >> T;
    for(int c = 0; c < T; c++) {
        int n;
        cin >> n;
        vector<ll> arr(n);
        for(auto &e: arr) cin >> e;
        
        while(n > 2) {
            for(int i = 0; i < (n+1)/2; i++) {
                arr[i] += arr[n-i-1];
            }
            n = (n+1)/2;
        }
        cout << "Case #" << c+1 << ": " << (arr[0] > arr[1] ? "Alice" : "Bob") << "\n";
    }

    return 0;
}