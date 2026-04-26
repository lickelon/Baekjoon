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

    int A, B, C;

    cin >> A >> B >> C;

    B += C;
    A += B / 60;
    B %= 60;
    A %= 24;

    cout << A << " " << B;

    return 0;
}