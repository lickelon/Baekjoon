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
    for(int t = 1; t <= T; t++) {
        int n;
        cin >> n;
        
        queue<int> _q;
        deque<int> arr[2];
        for(int i = 0; i < n; i++) {
            int input;
            cin >> input;
            _q.push((input+1000)%2);
            arr[(input+1000)%2].push_back(input);
        }
        sort(all(arr[1]));
        sort(all(arr[0]), greater<int>());

        cout << "Case #" << t << ": ";
        while(!_q.empty()) {
            cout << arr[_q.front()].front() << " ";
            arr[_q.front()].pop_front();
            _q.pop();
        }
        cout << "\n";
    }

    return 0;
}