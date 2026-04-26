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

    int arr[11] = {};

    while(true) {
        int n;
        cin >> n;
        if(n == 0) break;
        string s1, s2;
        cin >> s1 >> s2;
        if(s1 == "too") {
            if(s2 == "high") {
                for(int i = n; i <= 10; i++) {
                    arr[i] = 1;
                }
            }
            if(s2 == "low") {
                for(int i = 1; i <= n; i++) {
                    arr[i] = 1;
                }
            }
        }
        else {
            if(arr[n]) {
                cout << "Stan is dishonest\n";
            }
            else {
                cout << "Stan may be honest\n";
            }
            for(auto &u : arr) u = 0;
        }
    }

    return 0;
}