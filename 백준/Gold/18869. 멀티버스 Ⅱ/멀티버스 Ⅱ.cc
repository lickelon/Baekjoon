#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

void process(vector<int>& arr) {
    vector<int> temp(arr.begin(), arr.end());
    sort(all(temp));
    temp.erase(unique(all(temp)), temp.end());

    for(int i = 0; i < arr.size(); i++) {
        int idx = lower_bound(all(temp), arr[i]) - temp.begin();
        arr[i] = idx;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> m >> n;
    vector<vector<int>> arr(m, vector<int>(n));
    for(int i = 0; i < m; i++) {
        for(auto &u : arr[i]) cin >> u;
        process(arr[i]);
    }

    int ans = 0;
    for(int i = 0; i < m; i++) {
        for(int j = i+1; j < m; j++) {
            bool flag = true;
            for(int k = 0; k < n; k++) {
                if(arr[i][k] != arr[j][k]) {
                    flag = false;
                    break;
                }
            }
            if(flag) ans++;
        }
    }
    cout << ans;

    return 0;
}