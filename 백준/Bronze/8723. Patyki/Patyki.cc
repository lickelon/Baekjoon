#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

ll gcd(ll a, ll b)
{
    if (!b) return a;
    return gcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    vector<int> arr(3);

    for(int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    if(arr[0] == arr[2]) cout << 2;
    else if(arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2]) cout << 1;
    else cout << 0;

    return 0;
}