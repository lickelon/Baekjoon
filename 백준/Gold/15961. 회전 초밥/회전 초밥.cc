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

    int n, d, k, c;
    cin >> n >> d >> k >> c;
    vector<int> arr(n*2);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        arr[i+n] = arr[i];
    }

    vector<int> cnt(d+1);
    int num = 1;
    cnt[c] = 1;
    int ans = 0;
    for(int i = 0; i < k; i++) {
        cnt[arr[i]]++;
        if(cnt[arr[i]] == 1) num++;
    }
    ans = max(ans, num);
    for(int i = 0; i < n; i++) {
        cnt[arr[i]]--;
        if(cnt[arr[i]] == 0) num--;
        cnt[arr[i+k]]++;
        if(cnt[arr[i+k]] == 1) num++;
        ans = max(ans, num);
    }
    cout << ans;

    return 0;
}