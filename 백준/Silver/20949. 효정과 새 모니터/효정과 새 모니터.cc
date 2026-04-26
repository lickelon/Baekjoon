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
    vector<pair<int, int>> arr(n);
    for(int i = 0; i < n; i++) {
        int w, h;
        cin >> w >> h;
        arr[i] = {-(w*w+h*h), i+1};
    }
    sort(all(arr));
    for(auto u : arr) {
        cout << u.second << "\n";
    }

    return 0;
}