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

    int n, p, q;
    cin >> n >> p >> q;
    vector<int> arr1(n), arr2(n);
    cin >> arr1 >> arr2;
    vector<int> ans(n);
    int diff = p - q;
    bool flag = true;
    for(int i = 0; i < n; i++) {
        if(diff != 0 && (arr2[i]-arr1[i]) % diff == 0)
            ans[i] = (arr2[i]-arr1[i]) / diff;
        else if(diff == 0 && (arr2[i]-arr1[i]) == 0) {
            ans[i] = 0;
        }
        else flag = false;
        if(ans[i] < 0) flag = false;
    }

    if(flag) {
        cout << "YES\n";
        for(auto u : ans) cout << u << " ";
    }
    else {
        cout << "NO\n";
    }
    return 0;
}