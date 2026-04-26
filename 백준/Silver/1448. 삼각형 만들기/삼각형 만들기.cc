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
    
    sort(arr.rbegin(), arr.rend());

    for(int i = 0; i + 2 < N; i++) {
        if(arr[i] < arr[i+1] + arr[i+2]) {
            cout << arr[i] + arr[i+1] + arr[i+2];
            return 0;
        }
    }

    cout << -1;

    return 0;
}