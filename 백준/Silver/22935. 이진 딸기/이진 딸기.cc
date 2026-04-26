#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;

    while(T--)
    {
        int n;
        cin >> n;
        n = n % 28;
        if(n == 0) n = 28;
        if(n >= 15) {
            n = 30 - n;
        }
        bitset<4> s(n);
        for(int i = 3; i >= 0; i--) {
            if(s[i]) cout << "딸기";
            else cout << "V";
        }
        cout << "\n";
        
    }

    return 0;
}