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
    vector<string> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> head(n);
    vector<int> tail(n);
    for(int i = 0; i < n; i++) {
        head[i] = i;
        tail[i] = i;
    }
    vector<int> next(n, -1);
    for(int i = 0; i < n-1; i++) {
        int a, b;
        cin >> a >> b;
        next[tail[a-1]] = head[b-1];
        head[b-1] = head[a-1];
        tail[a-1] = tail[b-1];
    }
    int start = head[0];
    while(head[start] != start) {
        start = head[start];
    }

    while(start != -1) {
        cout << arr[start];
        start = next[start];
    }

    return 0;
}