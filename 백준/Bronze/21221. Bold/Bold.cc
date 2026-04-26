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

int arr[100][100];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        string input;
        cin >> input;
        for(int j = 0; j < m; j++)
        {
            if(input[j] == '.') arr[i][j] = 0;
            else arr[i][j] = 1;
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(arr[i][j] || (i > 0 && arr[i-1][j]) || (j > 0 && arr[i][j-1]) || (i > 0 && j > 0 && arr[i-1][j-1]))
            {
                cout << '#';
            }
            else
            {
                cout <<".";
            }
        }
        cout << "\n";
    }

    return 0;
}