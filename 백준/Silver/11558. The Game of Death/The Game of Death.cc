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
    while(T--) {
        int n;
        cin >> n;
        vector<int> arr(n+1);
        for(int i = 1; i <= n; i++) {
            cin >> arr[i];
        }

        vector<int> visit(n+1);
        int curr = arr[1];
        int cnt = 1;
        while(true) {
            if(visit[curr]) break;
            visit[curr] = cnt++;
            curr = arr[curr];
        }
        cout << visit[n] << "\n";
    }

    return 0;
}