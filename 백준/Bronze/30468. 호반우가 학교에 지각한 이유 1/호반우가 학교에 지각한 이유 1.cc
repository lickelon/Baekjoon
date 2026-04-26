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

    int sum = 0;
    for(int i = 0; i < 4; i++) {
        int input;
        cin >> input;
        sum += input;
    }
    int n;
    cin >> n;
    n *= 4;
    cout << (n > sum ? n - sum : 0);

    return 0;
}