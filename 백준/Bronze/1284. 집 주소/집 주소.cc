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

    while(true)
    {
        int N;
        cin >> N;
        if(!N) break;

        int ans = 1;
        while(N > 0)
        {
            if(N%10 == 0) ans+=4;
            else if(N%10 == 1) ans += 2;
            else ans += 3;

            ans += 1;
            N /= 10;
        }
        cout << ans << "\n";
    }

    return 0;
}