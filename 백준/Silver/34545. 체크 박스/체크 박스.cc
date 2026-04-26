#include <bits/stdc++.h>

#define INF 0x3FFFFFFF

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

    vector<int> A(n), B(n);
    for(auto &e : A) cin >> e;
    for(auto &e : B) cin >> e;

    bool flag = false;
    for(auto e : A) {
        if(e == 0) flag = true;
    }

    int ans = n;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(A[i] != B[i]) cnt++;
    }
    ans = min(ans, cnt);

    if(flag) {
        cnt = 1;
        for(int i = 0; i < n; i++) {
            if(B[i] != 1) cnt++;
        }
        ans = min(ans, cnt);

        cnt = 2;
        for(int i = 0; i < n; i++) {
            if(B[i] != 0) cnt++;
        }
        ans = min(ans, cnt);
    }
    else {
        cnt = 1;
        for(int i = 0; i < n; i++) {
            if(B[i] != 0) cnt++;
        }
        ans = min(ans, cnt);
    }
    println("{}", ans);

    return 0;
}