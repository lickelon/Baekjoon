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
    vector<int> arr(N);
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    
    sort(arr.begin(), arr.end());

    int ans = 0;
    do {
        int temp = 0;
        for(int i = 1; i < N; i++) {
            temp += abs(arr[i] - arr[i-1]);
        }
        ans = max(ans, temp);
    } while(next_permutation(arr.begin(), arr.end()));

    cout << ans;

    return 0;
}