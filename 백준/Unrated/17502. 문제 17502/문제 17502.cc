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

    int N;
    cin >> N;

    string s;
    cin >> s;

    for(int i = 0; i <= N / 2; i++)
    {
        if(s[i] == '?')
        {
            if(s[N - i - 1] == '?')
            {
                s[i] = s[N - i - 1] = 'a';
            }
            else
            {
                s[i] = s[N - i - 1];
            }
        }
        else
        {
            if(s[N - i - 1] == '?')
            {
                s[N - i - 1] = s[i];
            }
        }
    }

    cout << s;

    return 0;
}