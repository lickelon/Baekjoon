#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int tree[1024] = {};
int arr[1024] = {};
int k, idx = 1;
void traversal(int x, int depth) {
    if(depth < k) traversal(x*2, depth+1);
    tree[x] = arr[idx++];
    if(depth < k) traversal(x*2+1, depth+1);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> k;
    for(int i = 1; i < (1 << k); i++) {
        cin >> arr[i];
    }

    traversal(1, 1);

    int t = 1;
    for(int i = 1; i < (1 << k); i++) {
        cout << tree[i] << " ";
        if(i == (1 << t)-1) {
            t++;
            cout << "\n";
        }
    }

    return 0;
}