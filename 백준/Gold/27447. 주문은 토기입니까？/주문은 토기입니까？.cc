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

    int n, m;
    cin >> n >> m;
    vector<int> arr(1000001, -1);
    vector<int> cs(n);
    for(int i = 0; i < n; i++) {
        cin >> cs[i];
        arr[cs[i]] = cs[i];
    }

    sort(all(cs), greater<int>());
    int idx = 0;
    for(int i = 1000000; i >= 0; i--) {
        if(i < cs[idx] && arr[i] == -1) {
            if(cs[idx] - i > m) {
                cout << "fail";
                return 0;
            }
            arr[i] = INF;
            idx++;
            if(idx >= n) break;
        }
    }
    if(idx != n) {
        cout << "fail";
        return 0;
    }

    int cnt = 0;
    for(int i = 0; i <= 1000000; i++) {
        if(arr[i] == -1) cnt++;
        if(arr[i] == INF) cnt--;
        if(cnt < 0) {
            cout << "fail";
            return 0;
        }
    }
    cout << "success";

    return 0;
}