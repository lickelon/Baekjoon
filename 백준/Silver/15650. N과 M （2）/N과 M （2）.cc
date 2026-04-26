#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int n, m;
vector<int> subset;

void search(int k, int d) {
    if(k == n + 2) {
        return;
    }
    if(d == m) {
        for(auto u : subset) {
            cout << u << " ";
        }
        cout << "\n";
    }
    else {
        subset.push_back(k);
        search(k+1, d+1);
        subset.pop_back();
        search(k+1, d);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    //int n, m;
    cin >> n >> m;

    stack<int> _st;

    search(1, 0);

    return 0;
}