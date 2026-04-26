#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 987654321
#define int ll

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

istream& operator>>(istream & ist, pii &p) {
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
    vector<int> arr(n);
    cin >> arr;

    int ans = 0;
    stack<int> _st;
    for(auto u : arr) {
        while(!_st.empty() && _st.top() < u) {
            _st.pop();
            ans++;
        }
        if(!_st.empty()) ans++;
        _st.push(u);
    }
    cout << ans;

    return 0;
}