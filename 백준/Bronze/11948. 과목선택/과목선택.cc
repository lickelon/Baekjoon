#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int a[4], b[2];

    for(int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    cin >> b[0] >> b[1];

    sort(a, a + 4);
    sort(b, b + 2);
    cout << a[1] + a[2] + a[3] + b[1];
}