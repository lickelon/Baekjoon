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
    vector<ll> arr(n+1);
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    ll sum = 0;
    bool check = true;
    for(int i = 1; i <= n; i++) {
        int input;
        cin >> input;
        if(input) {
            sum += arr[i];
            arr[i] *= -1;
        }
        check &= input;
    }
    if(check) {
        ll M = -INF;
        for(int i = 1; i <= n; i++) {
            M = max(M, arr[i]);
        }
        cout << sum + M;
        return 0;
    }
    ll ans = 0;
    ll m = arr[0];
    for(int i = 1; i <= n; i++) {
        arr[i] += arr[i-1];
        m = min(m, arr[i]);
        ans = max(ans, arr[i]-m);
    }
    cout << sum + ans;

    return 0;
}