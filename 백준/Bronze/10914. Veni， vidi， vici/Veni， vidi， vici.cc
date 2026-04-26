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

    int n;
    cin >> n;
    string s;
    getline(cin, s);
    getline(cin, s);

    istringstream iss(s);
    while(getline(iss, s, ' ')) {
        for(int i = 0; i < s.length() - 1; i += 2) {
            int a = (s[i] + s[i+1] - n - 'a' - 'a' + 26) % 26;
            cout << (char)(a+'a');
        }
        cout << " ";
    }

    return 0;
}