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

    string A, B;
    cin >> A >> B;
    int ans = INF;
    for(int i = 0; i <= B.length() - A.length(); i++) {
        int t = 0;
        for(int j = 0; j < A.length(); j++) {
            if(A[j] != B[i+j]) t++;
        }
        ans = min(ans, t);
    }

    cout << ans;

    return 0;
}