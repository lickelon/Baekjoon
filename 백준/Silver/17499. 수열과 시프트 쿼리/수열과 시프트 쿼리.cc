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

    vector<int> arr(n);
    for(auto &e : arr) cin >> e;

    int pivot = 0;
    while(q--) {
        int d;
        cin >> d;
        if(d == 1) {
            int i, x;
            cin >> i >> x;
            arr[(i+pivot-1)%n] += x;
        }
        else {
            int s;
            cin >> s;
            if(d == 2) pivot -= s;
            if(d == 3) pivot += s;
            pivot = (pivot + n) % n;
        }
    }
    for(int i = 0; i < n; i++) {
        cout << arr[(i+pivot)%n] << " ";
    }

    return 0;
}