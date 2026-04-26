#include <bits/stdc++.h>

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
    int arr[7] = {};

    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        arr[input%7]++;
    }

    int check[7] = {1, 0, };

    for(int i = 1; i < 7; i++) {
        int temp[7] = {};
        for(int j = 0; j < 7; j++) {
            if(check[j] == 0) continue;
            int ab = min(arr[i], 7);
            for(int k = 0; k <= ab; k++) {
                int gone = (k * i + j) % 7;
                temp[gone] = 1;
            }
        }
        for(int j = 0; j < 7; j++) {
            check[j] = (temp[j] ? temp[j] : check[j]);
        }
    }
    if(check[4]) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}