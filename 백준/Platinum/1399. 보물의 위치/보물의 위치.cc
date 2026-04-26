#include <bits/stdc++.h>

#define INF 0x7FFFFFFF
#define PI 3.141592653589793

//#define _ << " " <<
//#define endl "\n"

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int dig(int x)
{
    if(x < 10) return x;
    int sum = 0;
    while(x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return dig(sum);
}

pii dir[4] = {{0, 1},{1, 0},{0, -1},{-1, 0}};

int x, y;
int k, m;
int currN, currD;

void init()
{
    currD = 0;
    currN = 1;
    switch (m)
    {
    case 1:
    case 2:
        x = 0, y = 0;
        break;
    case 3:
        if(k >= 4) {x = -6; y = -8; k -= 4; currN = 9;}
        else {x = 0; y = 0;}
        break;
    case 4:
    case 5:
        x = 0, y = 0;
        break;
    case 6:
        if(k >= 4) {x = -3; y = -8; k -= 4; currN = 9;}
        else {x = 0; y = 0;}
        break;
    case 7:
    case 8:
        x = 0, y = 0;
        break;
    case 9:
        if(k >= 4) {x = 0; y = -8; k -= 4; currN = 9;}
        else {x = 0; y = 0;}
        break;
    }
}

void modK()
{
switch (m)
    {
    case 1:
        k %= 4;
        break;
    case 2:
        k %= 12;
        break;
    case 3:
        k %= 4;
        break;
    case 4:
        k %= 12;
        break;
    case 5:
        k %= 12;
        break;
    case 6:
        k %= 4;
        break;
    case 7:
        k %= 12;
        break;
    case 8:
        k %= 4;
        break;
    case 9:
        k %= 4;
        break;
    }
}

void fin()
{
    while(k > 0)
    {
        x += dir[currD].first * currN;
        y += dir[currD].second * currN;
        currD = (currD + 1) % 4;
        k -= 1;
        currN = dig(currN*m);
    }
}

inline void solve()
{
    cin >> k >> m;
    m = dig(m);
    init();
    modK();
    fin();
    cout << x << " " << y << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //cout.fixed; cout.precision(15);

    int T;
    cin >> T;

    while(T--)
    {
        solve();
    }

    return 0;
}