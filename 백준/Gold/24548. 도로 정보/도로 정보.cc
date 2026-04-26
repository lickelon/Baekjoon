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

int cnt[81];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    
    fill(cnt, cnt + 81, -1);
    cnt[0] = 0;
    int ms[4] = {};

    string s;
    cin >> s;

    for(int i = 0; i < n; i++)
    {
        switch(s[i])
        {
        case 'T':
            ms[0] = (ms[0] + 1) % 3;
            break;
        case 'G':
            ms[1] = (ms[1] + 1) % 3;
            break;
        case 'F':
            ms[2] = (ms[2] + 1) % 3;
            break;
        case 'P':
            ms[3] = (ms[3] + 1) % 3;
            break;
        }

        int t = 0;
        for(int i = 0; i < 4; i++)
        {
            t *= 3;
            t += ms[i];
        }
        cnt[t] += 1;
    }

    int ans = 0;
    for(int i = 0; i < 81; i++)
    {
        ans += ((cnt[i] + 1)*cnt[i]) / 2;
    }

    cout << ans;

    return 0;
}