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

    int n;
    cin >> n;
    ll arrA[32] = {};
    ll arrB[32] = {};
    ll arrC[32] = {};
    ll ansA = 0;
    ll ansB = 0;
    ll ansC = 0;
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        for(int j = 0; j < 32; j++) {
            int t = (input >> j) & 1;
            if(t) {
                arrA[j] += 1;
                ansA += (arrA[j] << j) % 998244353;
                ansA %= 998244353;
                arrB[j] = i + 1;
                ansB += (arrB[j] << j) % 998244353;
                ansB %= 998244353;
                arrC[j] = i + 1 - arrC[j];
                ansC += (arrC[j] << j) % 998244353;
                ansC %= 998244353;
            }
            else {
                arrA[j] = 0;
                ansB += (arrB[j] << j) % 998244353;
                ansB %= 998244353;
                ansC += (arrC[j] << j) % 998244353;
                ansC %= 998244353;
            }
        }
    }
    cout << ansA << " " << ansB << " " << ansC;

    return 0;
}