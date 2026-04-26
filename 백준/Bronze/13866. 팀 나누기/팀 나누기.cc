#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int A, B, C, D;
    cin >> A >> B >> C >> D;

    A += D;
    B += C;
    B -= A;
    cout << (B > 0 ? B : -B);
}