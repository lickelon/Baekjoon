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

    int x, c, k;
    cin >> x >> c >> k;
    vector<int> student(x+1), seat(c+1);

    vector<array<int, 3>> arr(k);
    for(auto &[t, s, n] : arr) {
        cin >> t >> s >> n;
    }
    ranges::sort(arr);
    for(auto [_, s, n] : arr) {
        if(seat[s]) continue;
        if(student[n]) {
            seat[student[n]] = 0;
        }
        seat[s] = n;
        student[n] = s;
    }
    for(int i = 1; i <= x; i++) {
        if(student[i]) cout << i << " " << student[i] << "\n";
    }

    return 0;
}