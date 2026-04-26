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

    int n, l;
    cin >> n >> l;
    deque<pii> _id;
    deque<pii> ant;
    for(int i = 0; i < n; i++) {
        int p;
        cin >> p;
        ant.emplace_back(make_pair(p < 0 ? -p : l - p, p < 0 ? -(i+1) : i+1));
        _id.emplace_back(make_pair(abs(p),i+1));
    }
    sort(all(ant));
    sort(all(_id));
    int t = ant.back().first;
    vector<int> ans;
    while(!ant.empty()) {
        if(ant.size() > 1 && ant[0].first == ant[1].first) {
            ans.push_back(min(_id.front().second, _id.back().second));
            ans.push_back(max(_id.front().second, _id.back().second));
            ant.pop_front();
            _id.pop_front();
            _id.pop_back();
        }
        else if(ant[0].second < 0) {
            ans.push_back(_id.front().second);
            _id.pop_front();
        }
        else {
            ans.push_back(_id.back().second);
            _id.pop_back();
        }
        ant.pop_front();
    }
    cout << abs(ans[n-1]) << " " << t;

    return 0;
}