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

    int n;
    cin >> n;
    vector<int> arr(6);
    cin >> arr;

    int a = min(arr[0], arr[5]);
    int b = min(arr[1], arr[4]);
    int c = min(arr[2], arr[3]);

    if(n == 1) {
        int M = 0, sum = 0;
        for(int i = 0; i < 6; i++) {
            sum += arr[i];
            M = max(M, arr[i]);
        }
        cout << sum - M << "\n";
        return 0;
    }
    int ans = 0;
    ans += (a+b+c)*4;
    ans += (a+b+c-max({a,b,c}))*(8*n-12);
    ans += min({a,b,c})*((n-2)*(n-2)*5 + 4*(n-2));

    cout << ans;

    return 0;
}