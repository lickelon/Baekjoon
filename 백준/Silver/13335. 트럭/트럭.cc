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

    int n, w, l;
    cin >> n >> w >> l;
    vector<int> arr(n);
    for(auto &e : arr) cin >> e;

    queue<int> _q;
    for(int i = 0; i < w; i++) _q.push(0);
    int sum = 0;
    int cnt = 0;
    int idx = 0;
    int ans = 0;
    while(++ans) {
        int curr = _q.front(); _q.pop();
        if(curr) {
            cnt++;
            sum -= curr;
        }
        if(cnt == n) break;

        if(arr[idx] <= l-sum) {
            _q.push(arr[idx]);
            sum += arr[idx];
            idx++;
        }
        else {
            _q.push(0);
        }
    }
    cout << ans;

    return 0;
}