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
    sort(all(arr));

    int x;
    cin >> x;

    int l = 0, r = n-1;
    int cnt = 0;
    while(l < r) {
        int sum = arr[l] + arr[r];
        if(sum == x) cnt++;
        if(sum <= x) l++;
        else r--;
    }
    cout << cnt;

    return 0;
}