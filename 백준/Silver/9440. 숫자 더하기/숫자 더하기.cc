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

    while(true) {
        int n;
        cin >> n;
        if(n == 0) break;
        int num[10] = {};
        for(int i = 0; i < n; i++) {
            int input;
            cin >> input;
            num[input]++;
        }
        int a = 0, b = 0;
        auto get_num = [&](int x=0) -> int {
            for(int i = x; i < 10; i++) {
                if(num[i] > 0) {
                    num[i] -= 1;
                    n -= 1;
                    return i;
                }
            }
        };
        a = get_num(1);
        b = get_num(1);
        if(n%2)a = a*10+get_num();
        while(n) {
            a = a*10+get_num();
            b = b*10+get_num();
        }
        cout << a + b << "\n";
    }

    return 0;
}