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
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < k; i++) {
        int input;
        cin >> input;
        int P = input * 100 / n;
        if (0 <= P && P <= 4) cout << 1;
        if (4 < P && P <= 11) cout << 2;
        if (11 < P && P <= 23) cout << 3;
        if (23 < P && P <= 40) cout << 4;
        if (40 < P && P <= 60) cout << 5;
        if (60 < P && P <= 77) cout << 6;
        if (77 < P && P <= 89) cout << 7;
        if (89 < P && P <= 96) cout << 8;
        if (96 < P && P <= 100) cout << 9;
        cout << " ";
    }
    

    return 0;
}