#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int check(string temp, string target) {
    int n = temp.size();
    int cnt = 0;
    for(int i = 1; i < n-1; i++) {
        if(temp[i-1] != target[i-1]) {
            temp[i-1] ^= 1;
            temp[i] ^= 1;
            temp[i+1] ^= 1;
            cnt++;
        }
    }
    if(temp[n-2] != target[n-2] && temp[n-1] != target[n-1]) {
        return cnt+1;
    }
    else if(temp[n-2] == target[n-2] && temp[n-1] == target[n-1]) {
        return cnt;
    }
    else {
        return n+1;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    string curr, target;
    cin >> curr >> target;

    int ans = check(curr, target);
    curr[0] ^= 1;
    curr[1] ^= 1;
    ans = min(ans, check(curr, target)+1);
    if(ans > n) cout << -1;
    else cout << ans;

    return 0;
}