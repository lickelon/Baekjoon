#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

#define x first
#define y second

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

    pii curr = {0,0};

    vector<pii> arr(n);
    for(auto &e : arr) {
        cin >> e.x >> e.y;
    }

    int ans = 0;
    for(int i = 0; i < m; i++) {
        int idx = 0;
        int score = 0;
        for(int j = 0; j < n; j++) {
            int temp = 0;
            temp += (curr.x-arr[j].x)*(curr.x-arr[j].x);
            temp += (curr.y-arr[j].y)*(curr.y-arr[j].y);
            if(temp > score) {
                score = temp;
                idx = j;
            }
        }
        ans += score;
        curr = arr[idx];
        cin >> arr[idx].x >> arr[idx].y;
    }
    cout << ans;

    //assert(!(ans == 69));

    return 0;
}