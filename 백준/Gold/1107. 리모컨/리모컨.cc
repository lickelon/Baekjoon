#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int bt[10];

int check(int n) {
    if(n == 0 && bt[0] == 0) return 1;
    if(n == 0 && bt[0] == 1) return -1;
    int cnt = 0;
    while(n > 0) {
        if(bt[n%10]) return -1;
        n /= 10;
        cnt++;
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int input;
        cin >> input;
        bt[input] = 1;
    }

    int ans = INF;
    for(int i = 0; i < 1000000; i++) {
        int ret = check(i);
        if(i == 100) ret = 0;
        if(ret == -1) continue;
        ans = min(ans, ret + abs(n-i));
    }

    cout << ans;


    return 0;
}