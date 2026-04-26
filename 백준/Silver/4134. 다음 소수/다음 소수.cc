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

    int T;
    cin >> T;
    while(T--) {
        ll n;
        cin >> n;
        if(n <= 2) {
            cout << 2 << "\n";
            continue;
        }
        ll temp = n;
        while(true) {
            bool flag = false;
            for(ll i = 2; i * i <= temp; i++) {
                if(temp % i == 0) {
                    flag = true;
                    break;
                }
            }
            if(!flag) {
                cout << temp << "\n";
                break;
            }
            temp++;
        }

    }

    return 0;
}