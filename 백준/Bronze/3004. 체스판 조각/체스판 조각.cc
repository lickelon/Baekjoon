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
    
    int N;
    int A, B;

    cin >> N;

    A = N / 2 + 1;
    B = (N + 1) / 2;
    cout << (A*(A+1))/2 + (B*(B+1))/2;

    return 0;
}