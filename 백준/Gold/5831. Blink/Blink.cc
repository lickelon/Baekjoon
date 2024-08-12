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

    ll n, b;
    cin >> n >> b;
    vector<int> visit(1 << n);
    int curr = 0;
    for(int i = 0; i < n; i++) {
        curr = curr << 1;
        int input;
        cin >> input;
        curr += input;
    }
    visit[curr] = 1;
    while(b) {
        int toggle = curr >> 1;
        if(curr%2) toggle += (1 << (n-1));
        int next = curr ^ toggle;
        if(visit[next]) {
            b %= (visit[curr]+1 - visit[next]);
        }
        if(b) {
            visit[next] = visit[curr]+1;
            curr = next;
            b--;
        }
    }
    bitset<16> ans(curr);
    for(int i = n-1; i >= 0; i--) cout << ans[i] << "\n";

    return 0;
}