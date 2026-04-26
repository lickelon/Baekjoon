#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

char arr[2000][2000];
bool bomb[2000][2000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        bool isDestroyed = true;
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'X' && isDestroyed)
            {
                int k = 1;
                while (j - k >= 0 && arr[i][j - k] == '.')
                {
                    bomb[i][j - k] = true;
                    k++;
                }
            }
            else if (arr[i][j] == 'X')
                isDestroyed = true;
            else if (arr[i][j] == 'O')
                isDestroyed = false;
        }
        if (isDestroyed)
        {
            int k = 1;
            while (N - k >= 0 && arr[i][N - k] == '.')
            {
                bomb[i][N - k] = true;
                k++;
            }
        }
    }

    for (int j = 0; j < N; j++)
    {
        bool isDestroyed = true;
        for (int i = 0; i < N; i++)
        {
            if (arr[i][j] == 'O')
            {
                isDestroyed = false;
                int k = 1;
                while (i - k >= 0 && arr[i - k][j] == '.')
                {
                    bomb[i - k][j] = false;
                    k++;
                }
            }
            else if (arr[i][j] == '.' && isDestroyed == false)
                bomb[i][j] = false;
            else if (arr[i][j] == 'X')
                isDestroyed = true;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arr[i][j] == '.' && bomb[i][j])
                cout << "B";
            else
                cout << arr[i][j];
        }
        cout << "\n";
    }

    return 0;
}