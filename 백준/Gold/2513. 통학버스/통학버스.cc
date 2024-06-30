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

    int n, k, s;
    cin >> n >> k >> s;
    vector<pii> arr1, arr2;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if(a < s) {
            arr1.push_back({s-a, b});
        }
        else {
            arr2.push_back({a-s, b});
        }
    }
    sort(all(arr1), greater<pii>());
    sort(all(arr2), greater<pii>());

    int ans = 0;
    int temp = k;
    for(auto u : arr1) {
        temp += u.second;
        while(temp > k) {
            temp -= k;
            ans += u.first;
        }
    }
    temp = k;
    for(auto u : arr2) {
        temp += u.second;
        while(temp > k) {
            temp -= k;
            ans += u.first;
        }
    }
    cout << ans * 2;
    return 0;
}