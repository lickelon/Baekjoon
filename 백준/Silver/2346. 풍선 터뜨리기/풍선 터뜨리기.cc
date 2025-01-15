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
    deque<pii> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i].second;
        arr[i].first = i+1;
    }

    while(!arr.empty()) {
        pii curr = arr[0];
        arr.pop_front();
        cout << curr.first << " ";
        if(curr.second > 0) curr.second -= 1;
        while(curr.second) {
            if(curr.second < 0) {
                arr.push_front(arr.back());
                arr.pop_back();
                curr.second++;
            }
            else {
                arr.push_back(arr.front());
                arr.pop_front();
                curr.second--;
            }
        }
    }

    return 0;
}