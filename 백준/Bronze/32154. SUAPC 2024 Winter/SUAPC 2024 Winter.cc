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

    int arr[] = {0x1aff, 0x19f5, 0x19f5, 0x18f7, 0x18f5, 0x18f5, 0x18f5, 0x18f5, 0x18f5, 0x18e7};
    int n;
    cin >> n;

    vector<int> ans;
    for(int i = 0; i <13; i++) {
        if((1 << i) & arr[n-1]) ans.push_back(i);
    }
    cout << ans.size() << "\n";
    for(auto e : ans) {
        cout << (char)('A' + e) << " ";
    }

    return 0;
}