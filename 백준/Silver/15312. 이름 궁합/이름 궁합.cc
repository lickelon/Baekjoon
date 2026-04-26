#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int stroke[] = {3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};

vector<int> arr[4000];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string a, b;
    cin >> a >> b;

    int depth = 0;
    for(int i = 0; i < a.length(); i++) {
        arr[depth].emplace_back(stroke[a[i] - 'A']);
        arr[depth].emplace_back(stroke[b[i] - 'A']);
    }
    depth++;
    while(arr[depth-1].size() > 2) {
        for(int i = 0; i < arr[depth-1].size() - 1; i++) {
            arr[depth].emplace_back((arr[depth-1][i] + arr[depth-1][i+1]) % 10);
        }
        depth++;
    }

    cout << arr[depth-1][0] << arr[depth-1][1];

    return 0;
}