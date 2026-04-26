#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int visit[1000001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int a, k;
    cin >> a >> k;
    queue<pii> q;
    q.push({a, 0});
    while(true) {
        pii top = q.front();
        q.pop();
        if(top.first == k) {
            cout << top.second;
            break;
        }
        if(top.first + 1 <= k && !visit[top.first + 1]) {
            visit[top.first + 1] = 1;
            q.push({top.first + 1, top.second+1});
        }
        if(top.first * 2 <= k && !visit[top.first * 2]) {
            visit[top.first * 2] = 1;
            q.push({top.first * 2, top.second+1});
        }
    }

    return 0;
}