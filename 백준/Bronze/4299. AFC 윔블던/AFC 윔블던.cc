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
    
    int A, B;
    cin >> A >> B;

    if((A + B) % 2 || A < B)
        cout << -1;
    else
        cout << (A + B) / 2 << " " << (A - B) / 2;
    
    return 0;
}