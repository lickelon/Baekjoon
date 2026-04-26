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

    string s;
    cin >> s;
    int n;
    cin >> n;
    int ans = 0;
    vector<string> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        arr[i] += arr[i];
        ans += arr[i].find(s) != string::npos;
    }

    cout << ans;

    return 0;
}