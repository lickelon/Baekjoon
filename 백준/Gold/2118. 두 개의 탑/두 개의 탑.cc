#include <bits/stdc++.h>

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

    int N;
    cin >> N;
    vector<int> arr(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
        arr[i] += arr[i-1];
    }
    int a = 1, b = 1;
    int sum = arr[N];
    int ans = 0;;
    while(true) {
        int s1 = arr[b] - arr[a-1];
        int s2 = sum - s1;
        if(s1 < s2) b++;
        else a++;
        ans = max(ans, min(s1, s2));
        if(b == N+1) break;
    }

    cout << ans;

    return 0;
}