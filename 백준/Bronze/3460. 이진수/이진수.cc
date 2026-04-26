#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //cout<<fixed; cout.precision(2);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        bitset<20> b(n);
        for(int i = 0; i < 20; i++) {
            if(b[i]) cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}