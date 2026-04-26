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

    int arr[4] = {0, 1, 0, 0};

    int m;
    cin >> m;
    for(int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }

    for(int i = 1; i <= 3; i++)
    {
        if(arr[i] == 1) cout << i;
    }

    return 0;
}