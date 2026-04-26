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
    vector<ll> arr(N);
    ll sum = 0;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr.begin(), arr.end());
    if((N == 1 && arr[0] == 1) || arr[N-1] * 2 <= sum) {
        cout << "Happy\n";
    }
    else {
        cout << "Unhappy\n";
    }
    

    return 0;
}