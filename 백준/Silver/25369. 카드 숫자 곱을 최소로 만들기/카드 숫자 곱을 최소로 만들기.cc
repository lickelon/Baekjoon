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

    int n;
    cin >> n;
    int pa = 1;
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        pa *= input;
    }
    
    int l = pow(9, n);
    for(int i = 0; i < l; i++) {
        vector<int> arr(n);
        int curr = i;
        for(int d = 0; d < n; d++) {
            arr[d] = curr % 9 + 1;
            curr /= 9;
        }
        reverse(all(arr));
        int pb = 1;
        for(auto e : arr) pb *= e;
        if(pb > pa) {
            for(auto e : arr) cout << e << " ";
            return 0;
        }
    }
    cout << -1;
    return 0;
}