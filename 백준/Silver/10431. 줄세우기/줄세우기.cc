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

    int P;
    cin >> P;
    while(P--) {
        int T;
        cin >> T;
        vector<int> arr(20);
        int ans = 0;
        for (int i = 0; i < 20; i++) {
            cin >> arr[i];
            for(int j = 0; j < i; j++) {
                if(arr[j] > arr[i]) ans++;
            }
        }
        cout << T << " " << ans << "\n";
    }

    return 0;
}