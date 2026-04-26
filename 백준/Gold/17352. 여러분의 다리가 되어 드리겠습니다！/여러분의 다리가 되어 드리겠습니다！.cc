#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;

int is[300001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;
    if (n == 2) cout << "1 2";
    else
    {
        for (int i = 0; i < n - 2; i++)
        {
            int a, b;

            cin >> a >> b;

            if (is[a] == 0 && is[b] == 0)
            {
                is[a] = a;
                is[b] = a;
            }
            else if (is[a] == 0)
            {
                int data = b;
                while (is[data] != data) data = is[data];
                is[a] = data;
            }
            else if (is[b] == 0)
            {
                int data = a;
                while (is[data] != data) data = is[data];
                is[b] = data;
            }
            else
            {
                int data1 = a, data2 = b;
                while (is[data1] != data1) data1 = is[data1];
                while (is[data2] != data2) data2 = is[data2];
                is[data2] = data1;
            }
        }

        int data1 = 1;
        while (is[data1] != data1) data1 = is[data1];
        if (data1 == 0) data1 = 1;

        for (int i = 2; i <= n; i++)
        {
            int data2 = i;
            while (is[data2] != data2) data2 = is[data2];
            if (data1 != data2)
            {
                if (data2 == 0) data2 = i;
                cout << data1 << " " << data2;
                break;
            }
        }
    }
    return 0;
}