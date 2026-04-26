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

    int n, k;
    cin >> n >> k;
    if(k == 1 || (k == n && k % 2 == 1)) {
        cout << "NO";
        return 0;
    }

    cout << "YES\n";
    int t = n/k;
    for(int i = 1; i <= t; i++) {
        ll sum = 0;
        if(t % k == 1) {
            if(k == 2) {
                cout << i << " ";
                sum += i;
            }
            else {
                cout << (i+1) % t + 1 << " ";
                sum += (i+1) % t + 1;
            }
        }
        else {
            cout << (i % t) + 1 << " ";
            sum += (i % t) + 1;
        }
        for(int j = 1; j < k; j++) {
            cout << i + j * t << " ";
            sum += i + j * t;
        }
        cout << "\n";
        assert(sum % k != 0);
    }

    return 0;
}