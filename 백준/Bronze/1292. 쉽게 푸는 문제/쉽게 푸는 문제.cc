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

    int A, B;

    cin >> A >> B;

    int k = 1, cnt = 0, ans = 0;
    for(int i = 1; i <= 1000; i++)
    {
        if(cnt >= k)
        {
            cnt = 0;
            k++;
        }
        cnt++;
        if(A <= i && i <= B)
        {
            ans += k;
        }
    }

    cout << ans;

    return 0;
}