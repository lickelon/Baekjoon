#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    pii maxc;
    int max = 0;
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            int input;
            cin >> input;
            if(input > max) {
                maxc = {i, j};
                max = input;
            }
        }
    }
    cout << max << "\n" << maxc.first+1 << " " << maxc.second+1;
    return 0;
}