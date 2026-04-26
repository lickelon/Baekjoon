#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;
int n;
vector<pll> tree;
deque<int> value;
vector<char> op;
int solve(int node, bool mode)
{
    if(node <= n)
    {
        if(mode)
        {
            int ret = value[value.size()-1];
            value.pop_back();
            return ret;
        }
        else
        {
            int ret = value[0];
            value.pop_front();
            return ret;
        }
    }
    else
    {
        if(op[node - n - 1] == '+')
        {
            return solve(tree[node].first, mode) +
                   solve(tree[node].second, mode);
        }
        else
        {
            return solve(tree[node].first, mode) -
                   solve(tree[node].second, !mode);
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    tree.resize(2 * n);
    value.resize(n);
    op.resize(n);

    for (int i = 0; i < n; ++i) {
        cin >> value[i];
    }

    sort(value.begin(), value.end());

    for (int i = n + 1; i < 2 * n; ++i) {
        char c; cin >> c;
        op[i - n - 1] = c;
        int left, right; cin >> left >> right;
        tree[i] = { left, right };
    }

    cout << solve(2 * n - 1, 1);

    return 0;
}