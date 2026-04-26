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
    vector<int> arr(n+1);
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    int cnt = 0;
    vector<int> visit(n+1, -1);
    vector<int> ans(n+1, 0);
    for(int i = 1; i <= n; i++) {
        int curr = i;
        int next = arr[curr];
        visit[curr] = i;
        while(visit[next] != i) {
            visit[next] = i;
            curr = next;
            next = arr[curr];
        }
        if(next == i) {
            cnt++;
            ans[i] = 1;
        }
    }
    cout << cnt << "\n";
    for(int i = 1; i <= n; i++) {
        if(ans[i] == 1) cout << i << "\n";
    }



    return 0;
}