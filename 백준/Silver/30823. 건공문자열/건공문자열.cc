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
    string s;
    cin >> s;
    cout << s.substr(k-1);
    if((n-k) % 2 == 0) {
        reverse(s.begin(), s.begin() + (k-1));
    }
    cout << s.substr(0, k-1);

    return 0;
}