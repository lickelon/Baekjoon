#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, C, E;
    int a, c, e;
    cin >> A >> C >> E >> a >> c >> e;
    char ans = 'E';
    if(c * 2 >= C) ans -= 1;
    if (c == C) {
        ans -= 1;
        if(a * 2 >= A) ans -= 1;
        if (a == A) ans -= 1;
    }

    cout << ans;

    return 0;
}