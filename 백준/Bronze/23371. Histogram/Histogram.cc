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

    int n, s, k;
    cin >> n >> s >> k;
    vector<int> arr(n, 0);

    for(int i = 0; i < k; i++)
    {
        int input;
        cin >> input;
        arr[(input-1)/s]++;
    }

    int max_height = 0;
    for(int i = 0; i < n; i++)
    {
        max_height = max(max_height, arr[i]);
    }

    for(int i = 0; i < max_height; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(max_height - i <= arr[j]) cout << "#";
            else cout << ".";
        }
        cout << "\n";
    }
    for(int i = 0; i < n; i++) cout << "-";

    return 0;
}