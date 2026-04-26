#include <bits/stdc++.h>

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

    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int k;
        cin >> k;
        int before;
        cin >> before;
        for(int j = 1; j < k; j++) {
            int temp;
            cin >> temp;
            if(before <= temp) {
                cout << "No\n";
                return 0;
            }
            before = temp;
        }
    }

    cout << "Yes\n";
    return 0;
}