#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    int check[10] = {};
    int input, before = 0;
    bool invalid = false;
    cin >> n;

    cin >> before;
    check[before] = 1;
    for (int i = 1; i < n; i++)
    {
        cin >> input;
        switch (input)
        {
        case 1:
        {
            if (before == 3)
            {
                if(check[2] == 0) invalid = true;
            }
            else if (before == 7)
            {
                if(check[4] == 0) invalid = true;
            }
            else if (before == 9)
            {
                if(check[5] == 0) invalid = true;
            }
            else
            {
                if(check[1] == 1) invalid = true;
            }
            check[1] = 1;
            break;
        }
        case 2:
        {
            if (before == 8)
            {
                if(check[5] == 0) invalid = true;
            }
            else
            {
                if(check[2] == 1) invalid = true;
            }
            check[2] = 1;
            break;
        }
        case 3:
        {
            if (before == 1)
            {
                if(check[2] == 0) invalid = true;
            }
            else if (before == 7)
            {
                if(check[5] == 0) invalid = true;
            }
            else if (before == 9)
            {
                if(check[6] == 0) invalid = true;
            }
            else
            {
                if(check[3] == 1) invalid = true;
            }
            check[3] = 1;
            break;
        }
        case 4:
        {
            if (before == 6)
            {
                if(check[5] == 0) invalid = true;
            }
            else
            {
                if(check[4] == 1) invalid = true;
            }
            check[4] = 1;
            break;
        }
        case 5:
        {
            if(check[5] == 1) invalid = true;
            check[5] = 1;
            break;
        }
        case 6:
        {
            if (before == 4)
            {
                if(check[5] == 0) invalid = true;
            }
            else
            {
                if(check[6] == 1) invalid = true;
            }
            check[6] = 1;
            break;
        }
        case 7:
        {
            if (before == 1)
            {
                if(check[4] == 0) invalid = true;
            }
            else if (before == 3)
            {
                if(check[5] == 0) invalid = true;
            }
            else if (before == 9)
            {
                if(check[8] == 0) invalid = true;
            }
            else
            {
                if(check[7] == 1) invalid = true;
            }
            check[7] = 1;
            break;
        }
        case 8:
        {
            if (before == 2)
            {
                if(check[5] == 0) invalid = true;
            }
            else
            {
                if(check[8] == 1) invalid = true;
            }
            check[8] = 1;
            break;
        }
        case 9:
        {
            if (before == 1)
            {
                if(check[5] == 0) invalid = true;
            }
            else if (before == 3)
            {
                if(check[6] == 0) invalid = true;
            }
            else if (before == 7)
            {
                if(check[8] == 0) invalid = true;
            }
            else
            {
                if(check[9] == 1) invalid = true;
            }
            check[9] = 1;
            break;
        }
        default:
            break;
        }
        if (invalid)
        {
            cout << "NO";
            return 0;
        }
        before = input;
    }

    cout << "YES";
    return 0;
}