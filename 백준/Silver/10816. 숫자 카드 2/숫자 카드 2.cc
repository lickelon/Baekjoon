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

    unordered_map<int, int> _m;
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        _m[input]++;
    }

    int m;
    cin >> m;
    for(int i = 0; i < m; i++) {
        int input;
        cin >> input;
        cout << _m[input] << " ";
    }

    return 0;
}