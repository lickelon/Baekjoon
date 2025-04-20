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
        int n, c;
        cin >> n >> c;
        
        vector<int> arr(n);
        for(int i = 0; i < c; i++) {
            int input;
            cin >> input;

            int m = *min_element(all(arr));
            for(auto &e : arr) e -= m;
            for(int i = 0; i < n; i++) {
                if(arr[i] == 0) {
                    cout << i + 1 << " ";
                    arr[i] = input;
                    break;
                }
            }
        }
        cout << "\n";
    }
    

    return 0;
}