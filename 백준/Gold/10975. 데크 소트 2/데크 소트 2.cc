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
    vector<int> arr(n);
    cin >> arr;

    vector<int> sa(all(arr));
    sort(all(sa));

    map<int, int> _m;
    for(int i = 0; i < n; i++) {
        _m[sa[i]] = i;
    }

    int ans = 0;
    vector<pii> deq_arr;
    for(int i = 0; i < n; i++) {
        int ni = _m[arr[i]];
        bool inserted = false;
        for(auto &u : deq_arr) {
            if(u.first - ni == 1) {
                u.first = ni;
                inserted = true;
                break;
            }
            else if(ni - u.second == 1) {
                u.second = ni;
                inserted = true;
                break;
            }
        }
        if(!inserted) {
            deq_arr.push_back({ni,ni});
        }
    }
    cout << deq_arr.size();
    return 0;
}