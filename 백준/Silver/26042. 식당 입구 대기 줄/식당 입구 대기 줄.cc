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

    deque<int> dq;
    int M = 0;
    int ans;
    for(int i = 0; i < n; i++) {
        int a,b;
        cin >> a;
        if(a == 1) {
            cin >> b;
            dq.push_back(b);
        }
        else {
            dq.pop_front();
        }
        if(dq.size() > M || (dq.size() == M && dq.back() < ans)) {
            ans = dq.back();
            M = dq.size();
        }
    }

    cout << M << " " << ans;

    return 0;
}