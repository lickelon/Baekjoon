#include <bits/stdc++.h>

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

    int N, M;
    cin >> N >> M;
    vector<int> arr(N+M);

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N + M; j++) {
            int input;
            cin >> input;
            arr[i] -= input;
            arr[j] += input;
        }
    }

    for(auto u : arr) {
        cout << u << " ";
    }

    return 0;
}