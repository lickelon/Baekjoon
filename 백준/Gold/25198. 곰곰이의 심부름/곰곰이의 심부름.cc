#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

vector<int> e[100001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    /*
    그래프 구성
    BFS 두번(S->C, C->H)

    경로를 세 부분으로 나누기(출발지-중복직전, 중복경로, 중복직후-도착지)
    */
    int N;
    cin >> N;

    int S, C, H;
    cin >> S >> C >> H;

    for(int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        e[a].push_back(b);
        e[b].push_back(a);
    }

    vector<int> path;

    int before[100001] = {};
    int curr = C;
    before[curr] = -1;
    queue<int> _q;
    _q.push(curr);
    while(!_q.empty()) {
        curr = _q.front(); _q.pop();
        for(auto u : e[curr]) {
            if(before[u]) continue;
            _q.push(u);
            before[u] = curr;
        }
    }

    curr = S;
    int cnt1 = 1;
    while(curr != C) {
        int temp = before[curr];
        before[curr] = -cnt1;
        curr = temp;
        cnt1++;
    }

    curr = H;
    int cnt2 = 1;
    while(before[curr] > 0) {
        int temp = before[curr];
        before[curr] = -cnt2;
        curr = temp;
        cnt2++;
    }

    //cout << cnt1 << " " << cnt2 << " " << curr;

    ll num1, num2, num3;
    num1 = -before[curr] - 1;
    num2 = cnt2 - 1;
    num3 = cnt1 - num1;

    ll ans = 0;
    ans += (num1 * (num1 - 1)) / 2;
    ans += (num1 * num3);
    ans += (num2 * (num2 - 1)) / 2;
    ans += (num2 * num3);
    ans += (num1 * num2);
    ans += (num3 * (num3 - 1));

    cout << ans;


    return 0;
}