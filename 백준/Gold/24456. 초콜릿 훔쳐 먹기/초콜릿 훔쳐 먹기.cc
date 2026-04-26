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

bool is_prime(int x)
{
	if (x == 1)
		return 0;
	if (x == 2 || x == 3)
		return 1;
	int t = sqrt(x);
	for (int i = 2; i <= t; i++)
		if (x%i == 0)
			return 0;
	return 1;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, M, K;
    cin >> N >> M >> K;

    int p = K + abs(N - M);

    int temp = N * M;
    int MP;
    while(temp--)
    {
        if(is_prime(temp))
        {
            MP = temp;
            break;
        }
    }

    int ans = 0;
    if(p >= MP) ans = N * M - 1;
    else
    {
        temp = N * M - 1;
        while(temp > MP)
        {
            int s = sqrt(N * M - 1);
            int op = 0;
            for (int i = s; i >= 1; i--)
            {
                if (temp % i == 0)
                {
                    op = abs(i - temp / i);
                    break;
                }
            }
            if(op <= p) ans++;
            else break;

            temp--;
        }
    }

    cout << ans;

    return 0;
}