#include <bits/stdc++.h>

#define INF 0x3FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int p;
    cin >> p;

    vector<int> arr(4);
    for(auto &e : arr) cin >> e;
    print("{}", ranges::count_if(arr, [&](auto x){return p-x <= 1000;}));

    return 0;
}