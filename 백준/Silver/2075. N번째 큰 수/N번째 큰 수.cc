#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int arr[1500][1500];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    
    priority_queue<pii> _pq;
    for(int i = 0; i < n; i++) {
        _pq.push({arr[n-1][i], i});
    }
    int idx[1500] = {};
    for(int i = 0; i < n - 1; i++) {
        pii temp = _pq.top(); _pq.pop();
        idx[temp.second]++;
        _pq.push({arr[n - idx[temp.second] - 1][temp.second], temp.second});
    }
    
    cout << _pq.top().first;
    

    return 0;
}