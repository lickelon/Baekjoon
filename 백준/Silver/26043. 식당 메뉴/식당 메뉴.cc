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

    vector<int> A, B, C;
    queue<pii> _q;

    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        if(t == 1) {
            int a, b;
            cin >> a >> b;
            _q.push({a,b});
        }
        else {
            int b;
            cin >> b;
            pii fr = _q.front(); _q.pop();
            if(fr.second == b) {
                A.push_back(fr.first);
            }
            else {
                B.push_back(fr.first);
            }
        }
    }
    while(!_q.empty()) {
        C.push_back(_q.front().first);
        _q.pop();
    }

    sort(all(A));
    sort(all(B));
    sort(all(C));

    if(A.size() == 0) {
        cout << "None\n";
    }
    else {
        for(auto u : A) {
            cout << u << " ";
        }
        cout << "\n";
    }

    if(B.size() == 0) {
        cout << "None\n";
    }
    else {
        for(auto u : B) {
            cout << u << " ";
        }
        cout << "\n";
    }

    if(C.size() == 0) {
        cout << "None\n";
    }
    else {
        for(auto u : C) {
            cout << u << " ";
        }
        cout << "\n";
    }

    return 0;
}