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
        string s;
        cin >> s;
        int n;
        cin >> n;
        char c;
        cin >> c;
        deque<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            cin >> c;
        }
        if(n == 0) cin >> c;
        int r = 0;
        bool flag = false;
        for(auto u : s) {
            if(u == 'D') {
                if(arr.empty()) {
                    flag = true;
                    break;
                }
                if(r) arr.pop_back();
                else arr.pop_front();
            }
            else {
                r = !r;
            }
        }

        if(flag) {
            cout << "error\n";
            continue;
        }
        if(arr.size() == 0) {
            cout << "[]\n";
            continue;
        }
        cout << "[";
        if(r) {
            reverse(all(arr));
        }
        for(int i = 0; i < arr.size()-1; i++) {
            cout << arr[i] << ",";
        }
        cout << arr[arr.size()-1];
        cout << "]\n";
    }

    return 0;
}