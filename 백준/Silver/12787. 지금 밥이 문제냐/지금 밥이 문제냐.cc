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

    int T;
    cin >> T;
    while(T--) {
        int m;
        unsigned long long n;
        string s;
        cin >> m;
        if(m == 1) {
            cin >> s;
            istringstream iss(s);
            string temp;
            int arr[8];
            for(int i = 0; i < 8; i++) {
                getline(iss, temp, '.');
                arr[i] = stoi(temp);
            }
            n = 0;
            for(int i = 0; i < 8; i++) {
                n = n << 8;
                n += arr[i];
            }
            cout << n << "\n";
        } else {
            cin >> n;
            int arr[8];
            for(int i = 7; i >= 0; i--) {
                arr[i] = n % 256;
                n = n >> 8;
            }
            cout << arr[0];
            for(int i = 1; i < 8; i++) {
                cout << '.' << arr[i];
            }
            cout << "\n";
        }
    }

    return 0;
}