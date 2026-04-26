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

    vector<int> fibo;
    fibo.emplace_back(1);
    fibo.emplace_back(2);
    while(true) {
        int new_fibo = fibo[fibo.size()-1] + fibo[fibo.size()-2];
        if(new_fibo > 25000) break;
        fibo.emplace_back(new_fibo);
    }
    reverse(all(fibo));

    int t;
    cin >> t;
    while(t--) {
        int x;
        cin >> x;

        vector<int> binary(fibo.size(), 0);
        for(int i = 0; i < fibo.size(); i++) {
            if(x >= fibo[i]) {
                x -= fibo[i];
                binary[i] = 1;
            }
        }

        int ans = 0;
        for(int i = 0; i < fibo.size()-1; i++) {
            if(binary[i]) ans += fibo[i+1];
        }

        cout << ans << "\n";
    }

    return 0;
}