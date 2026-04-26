#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    int Min = 0x7FFFFFFF;
    for(int i = 1; i * i * i <= N; i++)
    {
        if(N % i == 0)
        {
            int v1 = N / i;
            for(int j = 1; j * j <= v1; j++)
            {
                if(v1 % j == 0)
                {
                    int v2 = v1 / j;
                    Min = min(Min, 2 * (i * j) + 2 * (j * v2) + 2 * (v2 * i));
                }
            }
        }
    }
    cout << Min;
    return 0;
}