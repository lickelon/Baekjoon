#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned long long ans = 0;

    int M, N;

    ll sum = 0, arr[100001];

    cin >> M >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(&arr[0], &arr[N]);

    sum -= M;

    for(int i = 0; i < N; i++)
    {
        ll temp = min(arr[i], sum / (N - i));
        ans += temp * temp;
        sum -= temp;
    }

    cout << ans;

    return 0;
}