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
    vector<ll> arr(n);
    vector<bool> toggle(n);
    ll sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        toggle[i] = true;
    }
    cout << sum << "\n";
    int Q;
    cin >> Q;
    while(Q--) {
        int q;
        cin >> q;
        if(q == 1) {
            ll i, x;
            cin >> i >> x;
            if(toggle[i-1])
                sum -= arr[i-1] - x;
            arr[i-1] = x;
        }
        else {
            int i;
            cin >> i;
            if(toggle[i-1])
                sum -= arr[i-1];
            else
                sum += arr[i-1];
            toggle[i-1] = !toggle[i-1];
        }
        cout << sum << "\n";
    }

    return 0;
}