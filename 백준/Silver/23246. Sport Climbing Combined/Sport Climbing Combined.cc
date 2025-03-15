#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

bool comp(array<int,4> &a, array<int,4> &b) {
    if(a[1]*a[2]*a[3] == b[1]*b[2]*b[3]) {
        if(a[1]+a[2]+a[3] == b[1]+b[2]+b[3]) {
            return a[0] < b[0];
        }
        return a[1]+a[2]+a[3] < b[1]+b[2]+b[3];
    }
    return a[1]*a[2]*a[3] < b[1]*b[2]*b[3];
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<array<int, 4>> arr(n);
    for(auto &e : arr) cin >> e[0] >> e[1] >> e[2] >> e[3];

    sort(all(arr), comp);
    cout << arr[0][0] << " " << arr[1][0] << " " << arr[2][0];
    return 0;
}