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

    int k;
    cin >> k;
    
    int size = 1;
    for(; size < k; size *= 2);

    int cut = 0;
    for(int curr = size; curr > 0; curr /= 2) {
        if(k % curr == 0) break;
        cut++;
    }

    cout << size << " " << cut;

    return 0;
}