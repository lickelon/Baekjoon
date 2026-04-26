#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int arr[100][100];
char input[101][101];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int h, w;
    cin >> h >> w;

    for(int i = 0; i < h; i++) {
        cin >> input[i];
    }

    for(int i = 0; i < h; i++) {
        int t = -1;
        for(int j = 0; j < w; j++) {
            if(t != -1) t++;
            if(input[i][j] == 'c') {
                t = 0;
            }
            cout << t << " ";
        }
        cout << "\n";
    }

    return 0;
}