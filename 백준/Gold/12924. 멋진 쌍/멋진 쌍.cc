#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int ans = 0;
    int digit = 0;

    int a, b;

    cin >> a >> b;
    int temp = a;
    while(temp > 0)
    {
        digit += 1;
        temp /= 10;
    }
    int mul = pow(10, digit - 1);

    for(int i = a; i <= b; i++)
    {
        temp = i;
        set<int> _set;
        for(int j = 0; j < digit; j++)
        {
            int first = temp / (mul);
            temp = (temp % mul) * 10 + first;
            if(temp > i && temp <= b)
            {
                _set.insert(temp);
            }
        }
        ans += _set.size();
    }
    cout << ans;
    return 0;
}