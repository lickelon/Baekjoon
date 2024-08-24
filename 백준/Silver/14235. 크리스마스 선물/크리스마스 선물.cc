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
    priority_queue<int> _pq;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if(a == 0) {
            if(_pq.empty()) cout << "-1\n";
            else cout << _pq.top() << "\n", _pq.pop();
        }
        else {
            while(a--) {
                int input;
                cin >> input;
                _pq.push(input);
            }
        }
    }

    return 0;
}