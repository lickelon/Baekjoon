#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int arr[100][100];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    int sum = n * (n * n + 1);
    sum /= 2;
    vector<int> check(n*n+1);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
            check[arr[i][j]] = 1;
        }
    }

    for(int i = 1; i <= n * n; i++) {
        if(check[i] == 0) {
            cout << "FALSE";
            return 0;
        }
    }

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        int s1 = 0, s2 = 0;
        for(int j = 0; j < n; j++) {
            s1 += arr[i][j];
            s2 += arr[j][i];
        }
        if(s1 == sum) cnt++;
        if(s2 == sum) cnt++;
    }

    int s = 0;
    for(int i = 0; i < n; i++) {
        s += arr[i][i];
    }
    if(s == sum) cnt++;

    s = 0;
    for(int i = 0; i < n; i++) {
        s += arr[i][n-i-1];
    }
    if(s == sum) cnt++;

    if(cnt == n * 2 + 2) {
        cout << "TRUE";
    }
    else {
        cout << "FALSE";
    }

    return 0;
}