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

    int a, b, c;
    cin >> a >> b >> c;
    cout << max(a + c, b);

    return 0;
}