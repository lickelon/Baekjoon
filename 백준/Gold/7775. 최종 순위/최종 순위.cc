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

    int n, p, k, d;
    cin >> n >> p >> k >> d;
    
    vector<int> arr(n);
    if(d == 1) {
        for(int i = 0; i < k; i++) {
            arr[i] = p / k;
        }
        p -= arr[0] * k;
        if((p != 0 && n == k) || p > arr[0]) {
            cout << "Wrong information";
            return 0;
        }
        if(p > 0) arr[k] = p;
    }
    else {
        for(int i = 0; d > 0; i++) {
            arr[i] = d-1;
            p -= arr[i];
            d--;
        }
        if(p < 0) {
            cout << "Wrong information";
            return 0;
        }
        arr[0] += p;
    }
    
    for(auto u : arr) cout << u << "\n";

    return 0;
}