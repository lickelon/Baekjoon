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

    int N, M, L;

    cin >> N >> M >> L;

    int sum = 0;

    for(int i = 0; i < N; i++)
    {
        int input;
        cin >> input;
        sum += input;
    }
    int ans;
    if(sum > M)
    {
        ans = -1;
    }
    else if(sum == M)
    {
        ans = 0;
    }
    else
    {
        if(sum >= L)
        {
            ans = 1;
        }
        else if(M - sum >= L)
        {
            ans = 1;
        }
        else
        {
            ans = -1;
        }
    }

    cout << ans;

    return 0;
}