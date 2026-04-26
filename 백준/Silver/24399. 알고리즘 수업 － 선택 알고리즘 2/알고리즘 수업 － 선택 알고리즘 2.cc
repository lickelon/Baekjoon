#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;


int A[10001];
int cnt = 0;
int n, q, k;

void print() {
    for(int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
}

int partition(int p, int r) {
    int x = A[r];
    int i = p - 1;
    for(int j = p; j < r; j++) {
        if(A[j] <= x) {
            int temp = A[++i];
            A[i] = A[j];
            A[j] = temp;
            cnt++;
            if(cnt == k) print();
        }
    }
    if(i + 1 != r) {
        int temp = A[i+1];
        A[i+1] = A[r];
        A[r] = temp;
        cnt++;
        if(cnt == k) print();
    }
    return i+1;
}

int select(int p, int r, int q) {
    if(p == r) return A[p];
    int t = partition(p, r);
    int k = t - p + 1;
    if(q < k) return select(p, t-1, q);
    else if(q == k) return A[t];
    else return select(t+1, r, q-k);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> q >> k;
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }
    select(0, n-1, q);
    if(cnt < k) cout << -1;

    return 0;
}