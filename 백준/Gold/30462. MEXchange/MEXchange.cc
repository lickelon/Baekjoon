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
    for(auto &u : arr) cin >> u;
    vector<int> check(n+1);
    vector<int> ans(n);
    if(arr[0] == 2) {
        ans[0] = 1;
        check[1] = 1;
    }
    for(int i = 1; i < n; i++) {
        if(arr[i] > i+2) {
            cout << "No";
            return 0;
        }
        if(arr[i] < arr[i-1]) {
            cout << "No";
            return 0;
        }
        if(arr[i] > arr[i-1]) {
            ans[i] = arr[i-1];
            check[arr[i-1]] = 1;
        }
    }
    if(arr[n-1] != n+1) {
        cout << "No";
        return 0;
    }
    int curr = 1;
    for(int i = 0; i < n; i++) {
        if(ans[i] == 0) {
            while(check[curr++]);
            ans[i] = --curr;
            check[curr] = 1;
        }
    }

    cout << "Yes\n";
    for(auto u : ans) cout << u << " ";

    return 0;
}