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

    ll m = INF;
    ll sum = 0;
    for(int i = 0; i < n; i++) {
        ll input;
        cin >> input;
        m = min(m, input);
        sum += input;
    }
    cout << max(-m, sum);

    return 0;
}