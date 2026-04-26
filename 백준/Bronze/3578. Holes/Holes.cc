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

    int h;
    cin >> h;
    if(h == 0) cout << 1;
    else if(h == 1) cout << 0;
    else if(h % 2) {
        cout << 4;    
    }
    for(int i = 0; i < h/2; i++) {
        cout << 8;
    }

    return 0;
}