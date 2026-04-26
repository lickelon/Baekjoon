#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int arr[50][4];

char NT[] = "ACGT";

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < 4; j++) {
                if(NT[j] == s[i]) {
                    arr[i][j]++;
                }
            }
        }
    }

    char ans[51] = {};
    int dist = 0;
    for(int i = 0; i < m; i++) {
        char target;
        int M = 0;
        for(int j = 0; j < 4; j++) {
            if(arr[i][j] > M) {
                M = arr[i][j];
                target = NT[j];
            }
        }
        for(int j = 0; j < 4; j++) {
            if(target == NT[j]) continue;
            dist += arr[i][j];
        }
        ans[i] = target;
    }

    ans[m] = '\0';
    cout << ans << "\n" << dist << "\n";

    return 0;
}