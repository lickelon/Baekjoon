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

    int idx;
    vector<string> arr(n);
    set<string> _s;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] == "?") idx = i;
        else _s.insert(arr[i]);
    }

    int m;
    cin >> m;
    queue<string> _q;
    for(int i = 0; i < m; i++) {
        string input;
        cin >> input;
        _q.push(input);
    }

    for(int i = _q.size(); i > 0; i--) {
        string temp = _q.front(); _q.pop();
        if(_s.find(temp) == _s.end()) _q.push(temp);
    }
    if(idx != 0) {
        char c = arr[idx-1].back();
        for(int i = _q.size(); i > 0; i--) {
            string temp = _q.front(); _q.pop();
            if(temp[0] == c) _q.push(temp);
        }
    }
    if(idx != n-1) {
        char c = arr[idx+1][0];
        for(int i = _q.size(); i > 0; i--) {
            string temp = _q.front(); _q.pop();
            if(temp.back() == c) _q.push(temp);
        }
    }

    cout << _q.front();

    return 0;
}