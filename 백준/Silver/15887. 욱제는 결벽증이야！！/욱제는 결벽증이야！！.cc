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

    vector<pii> ans;
    for(int i = 0; i < n; i++) {
        if(arr[i] == i+1) continue;
        int idx = i;
        while(arr[idx] != i+1) idx++;
        reverse(&arr[i], &arr[idx]+1);
        ans.emplace_back(i+1, idx+1);
    }

    cout << ans.size() << "\n";
    for(auto e : ans) cout <<e.first << " " << e.second << "\n";

    return 0;
}