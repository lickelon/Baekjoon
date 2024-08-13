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
    vector<pii> arr(n);
    string target = "UNIST";
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        pii curr = {0, 0};
        for(int i = 0; i < 5; i++) {
            if(s[0] == target[i]) {
                curr.first = i;
                break;
            }
        }
        for(int i = 0; i < 5 - curr.first; i++) {
            if(s[i] == target[i+curr.first]) {
                curr.second++;
            }
            else break;
        }
        arr[i] = curr;
    }
    vector<array<int, 5>> dp(n);
    for(int i = 0; i < 5; i++) {
        dp[0][i] = (arr[0].first == 0 && arr[0].second > i);
    }
    for(int i = 1; i < arr.size(); i++) {
        dp[i] = dp[i-1];
        if(arr[i].second == 0) continue;
        for(int j = 0; j < arr[i].second; j++) {
            int before = (arr[i].first == 0 ? 1 : dp[i-1][arr[i].first-1]);
            dp[i][arr[i].first+j] += before;
            dp[i][arr[i].first+j] %= 1000000007;
        }
    }
    cout << dp[n-1][4] % 1000000007;

    return 0;
}