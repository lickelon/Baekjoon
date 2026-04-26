#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

bool visit[200001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, k;
    cin >> n >> k;

    if(n == k) {
        cout << "0\n";
        return 0;
    }

    queue<int> _q;

    _q.push(-1);
    _q.push(n-1);
    _q.push(n+1);
    _q.push(n*2);
    visit[n] = true;
    int ans1 = 0;
    int ans2 = 0;
    bool endflag = false;
    while(true){
        int curr = _q.front(); _q.pop();
        if(curr < 0) {
            if(endflag) break;
            _q.push(curr-1);
            ans1 = -curr;
        }
        else {
            visit[curr] = true;
            if(curr == k) {
                endflag = true;
                ans2++;
            }
            if(curr-1 >= 0 && !visit[curr-1]) _q.push(curr-1);
            if(curr+1 <= 100000 && !visit[curr+1]) _q.push(curr+1);
            if(curr*2 <= 100000 && !visit[curr*2]) _q.push(curr*2);
        }
    }

    cout << ans1 << "\n";


    return 0;
}