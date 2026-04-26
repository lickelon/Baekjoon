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
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    vector<int> ps(n);
    for(int i = 1; i < n; i++) {
        ps[i] = abs(arr[i] - arr[i-1]);
        ps[i] += ps[i-1];
    }

    for(int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        cout << ps[b-1]-ps[a-1] << "\n";
    }

    return 0;
}