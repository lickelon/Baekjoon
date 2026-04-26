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
    for(int i = 1; i <= n; i++) {
        int temp = (i-1)/2;
        if(i % 2) {
            cout << temp + 1 << " ";
        }
        else {
            cout << n - temp << " ";
        }
    }

    return 0;
}