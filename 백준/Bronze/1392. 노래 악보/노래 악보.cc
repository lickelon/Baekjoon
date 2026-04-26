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

int arr[101];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    arr[0] = -1;

    int N, Q;
    cin >> N >> Q;

    for(int i = 0; i < N; i++)
    {
        int input;
        cin >> input;
        arr[i+1] = arr[i] + input;
    }

    for(int i = 0; i < Q; i++)
    {
        int input;
        cin >> input;
        int j;
        for(j = 1; j <= N; j++)
        {
            if(input <= arr[j])
                break;
        }
        cout << j << "\n";
    }

    return 0;
}