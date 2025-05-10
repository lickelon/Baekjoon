#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

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

    int n, k, m;
    cin >> n >> k >> m;

    deque<int> dq(n);
    iota(all(dq), 1);

    bool flag = false;
    int cnt = 0;
    while(!dq.empty()) {
        if(flag) {
            for(int i = 0; i < k-1; i++) {
                dq.push_front(dq.back());
                dq.pop_back();
            }
            cout << dq.back() << "\n";
            dq.pop_back();
        }
        else {
            for(int i = 0; i < k-1; i++) {
                dq.push_back(dq.front());
                dq.pop_front();
            }
            cout << dq.front() << "\n";
            dq.pop_front();
        }
        cnt++;
        if(cnt == m) {
            cnt = 0;
            flag = !flag;
        }
    }

    return 0;
}