#include <iostream>
#include <algorithm>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;

int P[2][10];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int ans = -1;

    for (int i = 0; i < 9; i++)
        cin >> P[0][i] >> P[1][i];

    for (int i = 0; i < 9; i++)
    {
        int Who[10] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };
        int flag = 1;
        for (int j = 0; j < 9; j++)
        {
            int data = j == i ? !P[0][j] : P[0][j];

            if (Who[P[1][j]] == -1)
                Who[P[1][j]] = data;
            else if(Who[P[1][j]] != data)
            {
                flag = 0;
            }
        }
        if (flag)
        {
            int count = 0;
            for (int j = 1; j < 10; j++)
            {
                if (Who[j] == 1) count++;
            }
            if (count == 1)
            {
                for (int j = 1; j < 10; j++)
                {
                    if (Who[j] == 1)
                    {
                        if (ans == -1 || ans == j) ans = j;
                        else ans = -2;
                    }
                }
            }
            if (count == 0)
            {
                for (int j = 1; j < 10; j++)
                {
                    if (Who[j] == -1) count++;
                }
                if (count == 1)
                {
                    for (int j = 1; j < 10; j++)
                    {
                        if (Who[j] == -1)
                        {
                            if (ans == -1 || ans == j) ans = j;
                            else ans = -2;
                        }
                    }
                }
                else if (count >= 2) ans = -2;
            }
        }
    }

    if (ans == -2) cout << "-1";
    else cout << ans;

    return 0;
}