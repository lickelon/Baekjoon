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
    vector<ll> neg, pos;
    bool is_zero = false;
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        if(input < 0) neg.emplace_back(input);
        else if(input > 0) pos.emplace_back(input);
        else is_zero = true;
    }
    sort(all(neg));
    sort(all(pos), greater<ll>());
    ll ans = 0;
    for(int i = 0; i < neg.size(); i += 2) {
        if(i + 1 < neg.size()) {
            ans += neg[i] * neg[i+1];
        }
        else {
            if(is_zero) {
                ans += 0;
            }
            else {
                ans += neg[i];
            }
        }
    }
    for(int i = 0; i < pos.size(); i += 2) {
        if(i + 1 < pos.size()) {
            ans += pos[i] * pos[i+1];
            if(pos[i] == 1 || pos[i+1] == 1) {
                ans += 1;
            }
        }
        else {
            ans += pos[i];
        }
    }
    cout << ans;
    return 0;
}