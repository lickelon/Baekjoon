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
    for(int i = 0; i < T; i++) {
        int n;
        cin >> n;
        cout << "Case #" << i+1 << ": ";
        if(n <= 25) {
            cout << "World Finals";
        }
        else if(n <= 1000) {
            cout << "Round 3";
        }
        else if(n <= 4500) {
            cout << "Round 2";
        }
        else {
            cout << "Round 1";
        }
        cout << "\n";
    }

    return 0;
}