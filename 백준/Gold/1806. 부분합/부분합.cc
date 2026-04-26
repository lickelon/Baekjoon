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

    int N, S;
    cin >> N >> S;
    vector<int> arr(N);
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    
    int st = 0;
    int sum = 0;
    int ans = INF;
    for(int ed = 0; ed < N; ed++) {
        sum += arr[ed];
        while(sum >= S) {
            ans = min(ans, ed-st+1);
            sum -= arr[st++];
        }
    }

    cout << (ans == INF ? 0 : ans);

    return 0;
}