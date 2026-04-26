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
        vector<string> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        if(n > 256) {
            cout << "0\n";
            continue;
        }
        int ans = INF;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                for(int k = j + 1; k < n; k++) {
                    int temp = 0;
                    for(int l = 0; l < 4; l++) {
                        temp += (arr[i][l] != arr[j][l]) + (arr[j][l] != arr[k][l]) + (arr[k][l] != arr[i][l]);
                    }
                    ans = min(ans, temp);
                }
            }
        }
        cout << ans << "\n";
    }

    return 0;
}