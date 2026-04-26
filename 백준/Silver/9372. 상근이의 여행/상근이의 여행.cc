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

    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N, M;
        cin >> N >> M;
        int assert_check = 0;
        for(int i = 0; i < M; i++) {
            int a, b;
            cin >> a >> b;
            assert_check = assert_check * 100 + a * 10 + b;
        }
        cout << N-1 << "\n";
    }

    return 0;
}