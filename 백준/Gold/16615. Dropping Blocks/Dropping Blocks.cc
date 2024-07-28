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
    
    int cnt = 0;
    for(int i = 1; i < n; i++) {
        if(arr[i] > arr[i-1]) {
            cnt += arr[i]-arr[i-1];
        }
        if(arr[i] < cnt) {
            cout << "NO";
            return 0;
        }
    }

    reverse(all(arr));
    cnt = 0;
    for(int i = 1; i < n; i++) {
        if(arr[i] > arr[i-1]) {
            cnt += arr[i]-arr[i-1];
        }
        if(arr[i] < cnt) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}