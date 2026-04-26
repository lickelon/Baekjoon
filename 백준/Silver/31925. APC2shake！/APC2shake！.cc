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

class _data {
public:
    string name;
    bool is_s;
    bool is_w;
    int toprate;
    int rank;
    pair<int, string> getInfo() {
        if(is_s || is_w || (toprate != -1 && toprate <= 3)) return {INF, name};
        return {rank, name};
    }
};
istream& operator>>(istream& ist, _data &d) {
    ist >> d.name;
    string temp;
    ist >> temp;
    if(temp == "hewhak") d.is_s = 1;
    else d.is_s = 0;
    ist >> temp;
    if(temp == "winner") d.is_w = 1;
    else d.is_w = 0;
    ist >> d.toprate >> d.rank;

    return ist;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<_data> arr(n);
    cin >> arr;

    vector<pair<int, string>> res;
    for(auto u : arr) {
        res.emplace_back(u.getInfo());
        if(res.back().first == INF) res.pop_back();
    }
    sort(all(res));

    vector<string> ans(min((int)res.size(), 10ll));
    for(int i = 0; i < ans.size(); i++) {
        ans[i] = res[i].second;
    }
    sort(all(ans));

    cout << ans.size() << "\n";
    for(auto u : ans) cout << u << "\n";

    return 0;
}