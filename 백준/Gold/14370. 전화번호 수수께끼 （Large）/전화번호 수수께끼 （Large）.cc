#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

string numStr[] = {"ZERO", "TWO", "FOUR", "SIX", "EIGHT", "ONE", "THREE", "FIVE", "SEVEN", "NINE"};
int numInt[] = {0, 2, 4, 6, 8, 1, 3, 5, 7, 9};
int check[] = {0, 1, 2, 2, 2, 0, 1, 0, 0, 1};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;
    for(int C = 1; C <= T; C++) {
        string s;
        cin >> s;

        int arr[26] = {};
        for(auto u : s) {
            arr[u-'A']++;
        }

        int ans[10] = {};
        for(int i = 0; i < 10; i++) {
            int cnt = arr[numStr[i][check[i]]-'A'];
            ans[numInt[i]] += cnt;
            for(auto u : numStr[i]) {
                arr[u - 'A'] -= cnt;
            }
        }
        cout << "Case #" << C << ": ";
        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < ans[i]; j++) {
                cout << i;
            }
        }
        cout << "\n";
    }

    return 0;
}