#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

//#define _ << " " <<
//#define endl "\n"

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout<<fixed; cout.precision(4);

    int T;
    cin >> T;

    int arr[302] = {};
    for(int i = 1; i <= 301; i++) {
        arr[i] = arr[i-1] + i;
    }

    while(T--) {
        int n;
        cin >> n;
        ll ans = 0;
        for(int i = 1; i <= n; i++) {
            ans += i * arr[i+1];
        }
        cout << ans << "\n";
    }

    return 0;
}