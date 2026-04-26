#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &e : arr) cin >> e;

    if(n == 1 && arr[0] % 2 == 0) {
        cout << 0;
        return 0;
    }
    int cnt = 0;
    for(auto e : arr) {
        if(e%2) cnt++;
    }
    if(cnt == 2 && arr[0] % 2 == arr[n-1] % 2) {
        cout << 0;
    }
    else {
        cout << 1;
    }

    return 0;
}