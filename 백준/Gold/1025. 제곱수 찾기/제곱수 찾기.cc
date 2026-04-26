#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[10][10];
    int n, m;
    int ans = -1;

    char input;

    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> input;
            arr[i][j] = input - '0';
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            for(int dn = -n; dn <= n; dn++)
            {
                for(int dm = -m; dm <= m; dm++)
                {
                    if(dn == 0 && dm == 0) continue;
                    int cn = i, cm = j;
                    int num = 0;

                    while(cn >= 0 && cn <= n - 1 && cm >= 0 && cm <= m - 1)
                    {
                        num = num * 10 + arr[cn][cm];
                        int temp = sqrt(num);
                        if((temp * temp == num || (temp + 1) * (temp + 1) == num) && num > ans) ans = num;
                        cn += dn;
                        cm += dm;
                    }
                }
            }
        }
    }

    cout << ans;

    return 0;
}