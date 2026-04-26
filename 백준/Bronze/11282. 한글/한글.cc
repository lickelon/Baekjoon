#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int a;
    cin >> a;

    a += 44031;
    char name[4] = {};
    name[2] = (a % 64) | (0x80);
    a /= 64;
    name[1] = (a % 64) | (0x80);
    a /= 64;
    name[0] = a | (0xE0);

    cout << name;
    return 0;
}