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
    vector<pii> arr(n);
    cin >> arr;

    sort(all(arr));

    int total = 0;  
    for(auto u : arr) total += u.second;
    int sum = 0;
    for(auto u : arr) {
        sum += u.second;
        if(sum * 2 >= total) {
            cout << u.first;
            return 0;
        }
    }

    return 0;
}