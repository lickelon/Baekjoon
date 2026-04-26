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
        int cnt[10] = {};
        int i;
        cnt[s[s.length()-1] - '0']++;
        for(i = s.length() - 2; i >= 0; i--) {
            cnt[s[i] - '0']++;
            if(s[i] < s[i+1]) break;
        }
        if(i == -1) {
            cout << "BIGGEST\n";
            continue;
        }
        int first;
        for(int j = s[i] - '0' + 1; j <= 9; j++) {
            if(cnt[j]) {
                first = j;
                break;
            }
        }
        cnt[first]--;
        for(int j = 0; j < i; j++) {
            cout << s[j];
        }
        cout << first;
        for(int j = 0; j <= 9; j++) {
            while(cnt[j]) {
                cnt[j]--;
                cout << j;
            }
        }
        cout << "\n";
    }

    return 0;
}