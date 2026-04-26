#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

#define loop(x) for(int i = 0; i < x; i++)

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B, C, D;

    cin >> A >> B >> C >> D;

    C += D;
    B += C / 60;
    C %= 60;
    A += B / 60;
    B %= 60;
    A %= 24;

    cout << A << " " << B << " " << C;

    return 0;
}