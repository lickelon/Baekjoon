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

    int n;
    cin >> n;
    vector<pii> arr(n);

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }

    sort(arr.begin(), arr.end());

    for(int i = 0; i < 10000; i++)
    {
        for(int j = i + 1; j < 10000; j++)
        {
            if(arr[i].first % arr[j].first == 0 || arr[j].first % arr[i].first == 0)
            {
                cout << arr[i].second << " " << arr[j].second;
                return 0;
            }
        }
    }

    return 0;
}