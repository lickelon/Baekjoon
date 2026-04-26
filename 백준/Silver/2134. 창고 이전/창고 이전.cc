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

    int n, m, k;;
    cin >> n >> m >> k;
    vector<int> arr(n), arr2(m);
    ll sumn = 0, summ = 0;
    for(auto &u : arr) {
        cin >> u;
        sumn += u;
    }
    for(auto &u : arr2) {
        cin >> u;
        summ += u;
    }
    ll cost = 0;
    int temp = min(sumn, summ);
    for(int i = 0; i < n; i++) {
        if(arr[i] <= temp) {
            cost += (i+1) * arr[i];
            temp -= arr[i];
        }
        else {
            cost += (i+1) * temp;
            temp = 0;
            break;
        }
    }
    temp = min(sumn, summ);
    for(int i = 0; i < m; i++) {
        if(arr2[i] <= temp) {
            cost += (i+1) * arr2[i];
            temp -= arr2[i];
        }
        else {
            cost += (i+1) * temp;
            temp = 0;
            break;
        }
    }
    cout << min(sumn,summ) << " " << cost;
    return 0;
}