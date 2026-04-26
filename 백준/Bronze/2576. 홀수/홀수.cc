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

    int sum = 0;
    int m = INF;

    for(int i = 0; i < 7; i++) {
        int input;
        cin >> input;
        if(input % 2) {
            m = min(m, input);
            sum += input;
        }
    }
    if(sum != 0) cout << sum << "\n" << m;
    else cout << -1;
    return 0;
}