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
    vector<int> arr(n);
    for(auto &u : arr) cin >> u;

    int m, M;
    M = arr[0];
    m = arr[0] - (arr[1]-arr[0]);
    //cout << m << " " << M << "\n";
    for(int i = 0; i < n-1; i++) {
        int a = arr[i];
        int b = arr[i+1];
        b = min(b, a + (a-m));
        m = max(a, a + (a-M));
        M = b;
        //cout << m << " " << M << "\n";
    }
    cout << max(0, M-m+1);
    return 0;
}