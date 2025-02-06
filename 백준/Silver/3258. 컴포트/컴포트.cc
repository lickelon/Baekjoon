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

    int n, z, m;
    cin >> n >> z >> m;
    vector<int> arr(n, 0);
    for(int i = 0; i < m; i++) {
        int input;
        cin >> input;
        arr[input-1] = 1;
    }

    for(int k = 1; k < n; k++) {
        int curr = 0;
        while(curr != z-1) {
            curr = (curr + k) % n;
            if(arr[curr]) break;
            if(curr == 0) break;
        }
        if(curr == z-1) {
            cout << k;
            break;
        }
    }

    return 0;
}