#include <bits/stdc++.h>

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
    int pivot;
    cin >> pivot;
    priority_queue<int> pq;
    for(int i = 0; i < n-1; i++) {
        int input;
        cin >> input;
        pq.push(input);
    }

    int ans = 0;
    while(!pq.empty() && pq.top() >= pivot) {
        int t = pq.top(); pq.pop();
        t -= 1;
        ans++;
        pivot += 1;
        pq.push(t);
    }

    cout << ans;

    return 0;
}