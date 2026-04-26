#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;

int arr[6];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int ans = 0;

    for (int i = 0; i < 6; i++)
        cin >> arr[i];

    ans = arr[5];

    while (arr[4] > 0)
    {
        arr[4] -= 1;
        ans++;
        arr[0] = max(0, arr[0] - 11);
    }

    while (arr[3] > 0)
    {
        arr[3] -= 1;
        ans++;
        if (arr[1] >= 5)
            arr[1] -= 5;
        else
        {
            int temp = 5 - arr[1];
            arr[1] = 0;
            arr[0] = max(0, arr[0] - temp * 4);
        }
    }

    while (arr[2] >= 4)
    {
        arr[2] -= 4;
        ans++;
    }

    if (arr[2] > 0)
    {
        ans++;
        int temp = 4 - arr[2];
        int temp2 = max(0, -1 + (temp * 2) - arr[1]);
        arr[1] -= -1 + (temp * 2) - temp2;
        arr[0] = max(0, arr[0] - (4 + temp + temp2 * 4));
    }

    while (arr[1] >= 9)
    {
        arr[1] -= 9;
        ans++;
    }

    if (arr[1] > 0)
    {
        ans++;
        int temp = 36 - arr[1] * 4;
        arr[1] = 0;
        arr[0] = max(0, arr[0] - temp);
    }

    while (arr[0] >= 36)
    {
        arr[0] -= 36;
        ans++;
    }

    if (arr[0] > 0)
    {
        ans++;
        arr[0] = 0;
    }

    cout << ans;

    return 0;
}