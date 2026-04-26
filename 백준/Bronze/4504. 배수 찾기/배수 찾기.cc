#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

int ca[] = {1,2,3,3,4,10};
int cb[] = {1,2,2,2,3,5,10};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout<<fixed; cout.precision(1);

    int n;
    cin >> n;
    while(true) {
        int a;
        cin >> a;
        if(!a) break;
        cout << a << " is " << (a % n ? "NOT " : "") << "a multiple of " << n << ".\n";
    }

    return 0;
}