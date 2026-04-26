#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

bool eval(string str) {
    int score = 0;
    for(int i = 0; i < str.size(); i+= 2) {
        if(str[i] == str[i+1]) continue;
        if(str[i] == 'O') score++;
        else score--;
    }
    if(score > 0) return true;
    else return false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    string str;
    for(int i = 0; i < n * 2; i++){
        string s;
        cin >> s;
        str += s;
    }

    set<string> _s;
    queue<pair<string, int>> _q;
    _q.push({str, 0});
    _s.insert(str);
    while(!_q.empty()) {
        auto curr = _q.front(); _q.pop();
        string ss = curr.first;
        if(eval(ss)) {
            cout << curr.second;
            break;
        }
        for(int i = 0; i < ss.size(); i++) {
            string next = "";
            next += ss[i];
            next += ss.substr(0, i);
            next += ss.substr(i+1);
            if(_s.find(next) == _s.end()) {
                _q.push({next, curr.second+1});
                _s.insert(next);
            }
        }
    }

    return 0;
}