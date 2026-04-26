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

int arr[1025][1025];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    while(n > 1)
    {
        int temp[4];
        for(int i = 0; i < n; i += 2)
        {
            for(int j = 0; j < n; j += 2)
            {
                for(int x = 0; x < 2; x++)
                {
                    for(int y = 0; y < 2; y++)
                    {
                        temp[y + x * 2] = arr[i + x][j + y];
                    }
                }
                sort(temp, temp + 4);
                arr[i/2][j/2] = temp[1];
            }
        }
        n /= 2;
    }

    cout << arr[0][0];
    
    return 0;
}