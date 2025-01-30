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
    for(auto &e : arr) cin >> e;

    int ans = 1;
    int cnt = 1;
    int flag = 0;

    for(int i = 1; i < n; i++) {
        int new_flag = (arr[i] != arr[i-1]);
        if(new_flag && arr[i] < arr[i-1]) new_flag = -1;
        if(flag && flag == new_flag) {
            cnt++;
        }
        else if(new_flag){
            cnt = 2;
        }
        ans = max(ans, cnt);
        if(new_flag) flag = new_flag;
    }
    cout << ans;

    return 0;
}