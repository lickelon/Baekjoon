#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;

vector<int> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int input;

        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());

    cin >> m;

    for(int i = 0; i < m; i++)
    {
        int input;

        cin >> input;
        cout << int(lower_bound(v.begin(), v.end(), input) != upper_bound(v.begin(), v.end(), input)) << "\n";
    }

    return 0;
}