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
    vector<int> arr(n+1, 1);
    for(int i = 0; i < m; i++) {
        int input;
        cin >> input;
        arr[input] = 0;
    }

    vector<int> miss;
    for(int i = 1; i <= n; i++) {
        if(arr[i]) miss.emplace_back(i);
    }
    if(miss.size() == 0) {
        cout << 0;
        return 0;
    }
    int ans = 0;
    int first = miss[0];
    int before = miss[0];
    int cost = 7;
    for(int i = 1; i < miss.size(); i++) {
        if(miss[i] - before < 4) {
            before = miss[i];
            cost = 5 + 2 * (before - first + 1);
        }
        else {
            ans += cost;
            before = miss[i];
            first = miss[i];
            cost = 7;
        }
    }
    ans += cost;
    cout << ans;
    return 0;
}