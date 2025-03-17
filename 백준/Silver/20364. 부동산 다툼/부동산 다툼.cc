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

    unordered_set<int> _s;

    for(int i = 0; i < q; i++) {
        int input, ans = 0;
        cin >> input;
        int temp = input;
        while(temp) {
            if(_s.find(temp) != _s.end()) ans = temp;
            temp /= 2;
        }
        _s.insert(input);
        cout << ans << "\n";
    }

    return 0;
}