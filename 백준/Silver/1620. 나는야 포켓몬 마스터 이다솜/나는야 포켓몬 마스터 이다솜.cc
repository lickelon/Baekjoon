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

    int n, q;
    cin >> n >> q;

    vector<string> arr(n+1);
    map<string, int> _m;
    for(int i = 0; i < n; i++) {
        cin >> arr[i+1];
        _m[arr[i+1]] = i+1;
    }

    for(int i = 0; i < q; i++) {
        string input;
        cin >> input;
        if(input[0] <= '9') {
            int num = stoi(input);
            cout << arr[num] << "\n";
        }
        else {
            cout << _m[input] << "\n";
        }
    }

    return 0;
}