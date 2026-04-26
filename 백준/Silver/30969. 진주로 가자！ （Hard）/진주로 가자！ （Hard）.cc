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
    vector<ll> arr(1002);
    ll pivot = 0;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        ll c;
        cin >> c;
        if(c > 1000) arr[1001]++;
        else arr[c]++;
        if(s == "jinju") pivot = c;
    }
    int ans = 0;
    for(int i = pivot + 1; i <= 1001; i++) {
        if(arr[i] > 0)
            arr[i] = arr[i];
        ans += arr[i];
    }
    cout << pivot << "\n" << ans;

    return 0;
}