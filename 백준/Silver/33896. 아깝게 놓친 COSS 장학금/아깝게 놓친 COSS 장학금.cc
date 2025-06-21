#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

struct dat {
    string name;
    int score;
    int risk;
    int cost;
};

int get_sc(dat& a) {
    return (a.score*a.score*a.score)/(a.cost*(a.risk+1));
}

bool comp(dat& a, dat& b) {
    int sca = get_sc(a), scb = get_sc(b);
    if(sca != scb) return sca > scb;
    if(a.cost != b.cost) return a.cost < b.cost;
    return a.name < b.name;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    vector<dat> arr(n);
    for(auto &e : arr) cin >> e.name >> e.score >> e.risk >> e.cost;
    sort(all(arr), comp);

    cout << arr[1].name;

    return 0;
}