#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 987654321
#define int long long

using namespace std;

using ld = long double;
using pii = pair<int,int>;

template <typename T1, typename T2>
istream& operator>>(istream & ist, pair<T1,T2> &p) {
    ist >> p.first >> p.second;
    return ist;
}
template <typename T>
istream& operator>>(istream & ist, vector<T> &arr) {
    for(auto &u : arr) ist >> u;
    return ist;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for(int i = 1; i < n; i++) {
        cin >> arr[i];
        arr[i] ^= arr[i-1];
    }

    for(int i = 0; i < q; i++) {
        int s;
        cin >> s;
        if(s == 0) {
            int x, y;
            cin >> x >> y;
            cout << (arr[y-1]^arr[x-1]) << "\n";
        }
        if(s == 1) {
            int x, y, d;
            cin >> x >> y >> d;
            cout << (arr[y-1]^arr[x-1]^d) << "\n";
        }
    }
    

    return 0;
}