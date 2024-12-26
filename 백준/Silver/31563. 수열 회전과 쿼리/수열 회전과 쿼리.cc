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

    int n, q;
    cin >> n >> q;
    vector<ll> arr(2*n+1);
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        arr[i+n] = arr[i];
    }
    for(int i = 1; i < arr.size(); i++) {
        arr[i] += arr[i-1];
    }
    int p = 0;
    for(int i = 0; i < q; i++) {
        int qa, a, b;
        cin >> qa;
        if(qa == 1) {
            cin >> a;
            p += n - a;
            p %= n;
        }
        if(qa == 2) {
            cin >> a;
            p += a;
            p %= n;
        }
        if(qa == 3) {
            cin >> a >> b;
            a = (a+p-1) % n + 1;
            b = (b+p-1) % n + 1;
            if(b < a) b += n;
            cout << arr[b] - arr[a-1] << "\n";
        }
    }

    return 0;
}