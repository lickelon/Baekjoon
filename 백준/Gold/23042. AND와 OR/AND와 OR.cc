#include <bits/stdc++.h>

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

    int bits[30] = {};
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        bitset<30> bit(input);
        for(int j = 0; j < 30; j++) {
            bits[j] += bit[j];
        }
    }

    ll ans = 1;
    for(int i = 0; i < n; i++) {
        ll temp = 0;
        for(int j = 29; j >= 0; j--) {
            temp *= 2;
            if(bits[j] > 0) {
                bits[j] -= 1;
                temp += 1;
            }
        }
        ans = ((ans % 1000000007) * (temp % 1000000007)) % 1000000007;
    }
    
    cout << ans;

    return 0;
}