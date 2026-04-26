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
    string s;
    cin >> s;
    vector<ll> arr(n);
    for(int i = 0; i < s.length(); i++) {
        arr[i] = s[i] - 'a' + 1;
    }

    ll ans = 0;
    for(int i = 0; i < n; i++) {
        if(!arr[i]) break;
        ll temp = 1;
        ll sum = 0;
        for(int j = 0; j < n - i; j++) {
            sum += temp;
            temp *= 26;
        }
        ans += (arr[i]-1) * sum + 1;
    }
    cout << ans;
    return 0;
}