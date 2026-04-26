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

    int n;
    cin >> n;
    priority_queue<int> pq;
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        pq.push(-input);
    }
    int ans = 0;
    while(pq.size() > 1) {
        int a = -pq.top(); pq.pop();
        int b = -pq.top(); pq.pop();
        ans += a+b;
        pq.push(-(a+b));
    }

    cout << ans;

    return 0;
}