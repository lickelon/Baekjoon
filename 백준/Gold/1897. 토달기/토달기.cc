#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    string st;
    cin >> n >> st;

    vector<string> arr(n);
    for (auto& e : arr) cin >> e;

    vector<vector<int>> edge(n);

    int idx = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == st) idx = i;
        for (int j = 0; j < n; j++) {
            if (arr[i].length() + 1 != arr[j].length()) continue;
            bool flag = false;
            bool cnn = true;
            for (int k = 0; k < arr[i].length(); k++) {
                if (arr[i][k] != arr[j][k + flag]) {
                    if (flag) {
                        cnn = false;
                        break;
                    }
                    else {
                        flag = true;
                        k -= 1;
                    }
                }
            }
            if (cnn) edge[i].push_back(j);
        }
    }

    int M = 0;
    int ans = idx;
    queue<pii> _q;
    vector<bool> visit(n, false);
    _q.push({ idx, 0 });
    visit[idx] = true;

    while (!_q.empty()) {
        pii curr = _q.front(); _q.pop();
        if (M < curr.second) {
            M = curr.second;
            ans = curr.first;
        }
        for (auto e : edge[curr.first]) {
            if (!visit[e]) {
                _q.push({ e, curr.second+1 });
                visit[e] = true;
            }
        }
    }

    cout << arr[ans];


    return 0;
}