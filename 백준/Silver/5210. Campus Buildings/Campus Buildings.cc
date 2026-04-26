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
    for(int i = 1; i <= k; i++) {
        cout << "Data Set " << i << ":\n";
        int n;
        cin >> n;
        vector<string> arr(n);
        getline(cin, arr[0]);
        for(auto &u : arr) {
            getline(cin, u);
        }
        string code;
        cin >> code;
        transform(all(code), code.begin(), ::tolower);
        for(auto u : arr) {
            string temp = u;
            transform(all(temp), temp.begin(), ::tolower);
            int index = 0;
            for(auto u : temp) {
                if(code[index] == u) {
                    index++;
                    if(index == code.length()) break;
                }
            }
            if(index == code.length()) {
                cout << u << "\n";
            }
        }
    }

    return 0;
}