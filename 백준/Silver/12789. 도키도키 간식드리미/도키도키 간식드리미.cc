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
    vector<int> arr(n);
    for(auto &e : arr) cin >> e;

    stack<int> _st;
    int target = 1;
    for(auto e : arr) {
        if(e == target) target++;
        else _st.push(e);
        while(!_st.empty() && _st.top() == target) {
            _st.pop();
            target++;
        }
    }
    cout << (_st.empty() ? "Nice" : "Sad");

    return 0;
}