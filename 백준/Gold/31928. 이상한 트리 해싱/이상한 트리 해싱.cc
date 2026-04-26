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

int log2(int n) {
    int res = 0;
    while(n >>= 1) ++ res;
    return res;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    int t = log2(log2(n));
    if((1ll << (1ll << t)) != n || n <= 4ll) {
        cout << "-1";
        return 0;
    }

    cout << t+1 << " " << t+1 << "\n";
    for(int i = 0; i < t; i++) {
        cout << "1 ";
    }
    cout << "\n";
    for(int i = 0; i < t-1; i++) {
        cout << "1 ";
    }
    cout << 2;
    return 0;
}