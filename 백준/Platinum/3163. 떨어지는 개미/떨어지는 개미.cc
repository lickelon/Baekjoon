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

    int T;
    cin >> T;
    while(T--) {
        int n, l, k;
        cin >> n >> l >> k;
        deque<int> _id;
        deque<pii> ant;
        for(int i = 0; i < n; i++) {
            int p, a;
            cin >> p >> a;
            ant.emplace_back(make_pair(a < 0 ? p : l - p, a));
            _id.emplace_back(a);
        }
        sort(all(ant));
        vector<int> ans;
        while(ans.size() < k) {
            if(ant.size() > 1 && ant[0].first == ant[1].first) {
                ans.push_back(min(_id.front(), _id.back()));
                ans.push_back(max(_id.front(), _id.back()));
                ant.pop_front();
                _id.pop_front();
                _id.pop_back();
            }
            else if(ant[0].second < 0) {
                ans.push_back(_id.front());
                _id.pop_front();
            }
            else {
                ans.push_back(_id.back());
                _id.pop_back();
            }
            ant.pop_front();
        }
        cout << ans[k-1] << "\n";
    }

    return 0;
}