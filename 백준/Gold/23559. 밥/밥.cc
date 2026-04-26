#include <bits/stdc++.h>

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

    int n, x;
    cin >> n >> x;
    vector<pii> arr(n);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
        ans += arr[i].second;
        x -= 1000;
    }

    vector<int> ar(n);
    for(int i = 0; i < n; i++) {
        ar[i] = arr[i].first - arr[i].second;
    }
    sort(ar.begin(), ar.end());
    
    while(x >= 4000) {
        int t = ar.back();
        ar.pop_back();
        if(t <= 0) break;
        x -= 4000;
        ans += t;
    }

    cout << ans;

    return 0;
}