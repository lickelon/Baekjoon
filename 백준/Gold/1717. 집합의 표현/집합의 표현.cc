#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int arr[1000001];

int find(int x) {
    if(x == arr[x]) return x;
    return arr[x] = find(arr[x]);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    for(int i = 0; i <= n; i++) {
        arr[i] = i;
    }

    for(int i = 0; i < m; i++) {
        int o, a, b;
        cin >> o >> a >> b;
        a = find(a);
        b = find(b);
        if(o) {
            if(a == b) cout << "YES\n";
            else cout << "NO\n";
        }
        else {
            arr[a] = b;
        }
    }

    return 0;
}