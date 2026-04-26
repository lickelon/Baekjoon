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

int getStella(int month, int day)
{
    switch (month)
    {
    case 1:
        if(day >= 20) return 1;
        else return 12;
        break;
    case 2:
        if(day >= 19) return 2;
        else return 1;
        break;
    case 3:
        if(day >= 21) return 3;
        else return 2;
        break;
    case 4:
        if(day >= 20) return 4;
        else return 3;
        break;
    case 5:
        if(day >= 21) return 5;
        else return 4;
        break;
    case 6:
        if(day >= 22) return 6;
        else return 5;
        break;
    case 7:
        if(day >= 23) return 7;
        else return 6;
        break;
    case 8:
        if(day >= 23) return 8;
        else return 7;
        break;
    case 9:
        if(day >= 23) return 9;
        else return 8;
        break;
    case 10:
        if(day >= 23) return 10;
        else return 9;
        break;
    case 11:
        if(day >= 23) return 11;
        else return 10;
        break;
    case 12:
        if(day >= 22) return 12;
        else return 11;
        break;
    
    default:
        return -1;
        break;
    }
}

int check[13];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    for(int i = 0; i < 7; ++i)
    {
        int m, d;
        cin >> m >> d;
        check[getStella(m, d)] = 1;
    }

    int n;
    cin >> n;
    vector<pii> arr;

    for(int i = 0; i < n; i++)
    {
        int m, d;
        cin >> m >> d;
        if(check[getStella(m,d)]) continue;
        arr.push_back({m,d});
    }

    sort(arr.begin(), arr.end());

    if(arr.size() == 0)
    {
        cout << "ALL FAILED\n";
    }
    else
    {
        for(int i = 0; i < arr.size(); i++)
        {
            cout << arr[i].first << " " << arr[i].second << "\n";
        }
    }

    return 0;
}