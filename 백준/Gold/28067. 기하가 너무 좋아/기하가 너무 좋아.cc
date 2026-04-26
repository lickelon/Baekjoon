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

    int n, m;
    cin >> n >> m;
    vector<pii> arr;
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= m; j++) {
            arr.emplace_back(pii(i, j));
        }
    }
    set<tuple<int,int,int>> _s;
    int s = arr.size();
    for(int i = 0; i < s; i++) {
        for(int j = i+1; j < s; j++) {
            for(int k = j+1; k < s; k++) {
                int a = arr[k].first - arr[i].first;
                int b = arr[k].second - arr[i].second;
                int c = arr[j].first - arr[i].first;
                int d = arr[j].second - arr[i].second;
                if(a*d == b*c) {
                    continue;
                }
                int e = arr[k].first - arr[j].first;
                int f = arr[k].second - arr[j].second;
                vector<int> line(3);
                line[0] = a*a + b*b;
                line[1] = c*c + d*d;
                line[2] = e*e + f*f;
                sort(all(line));
                _s.insert(make_tuple(line[0], line[1], line[2]));
            }
        }
    }

    cout << _s.size();

    return 0;
}