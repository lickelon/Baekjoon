#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int n, m;
vector<int> subset;
pii arr[8];

int an = 0;

void search(int d) {
    if(d == m) {
        for(auto u : subset) {
            cout << u << " ";
        }
        cout << "\n";
    }
    else {
        for (int i = 0; i < an; i++) {
            if(arr[i].second) {
                subset.push_back(arr[i].first);
                arr[i].second -= 1;
                search(d+1);
                arr[i].second += 1;
                subset.pop_back();
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;

    int input[8];
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    sort(input, input+n);

    arr[0] = {input[0], 1};
    for (int i = 1; i < n; i++) {
        if(input[i] == arr[an].first) {
            arr[an].second++;
        }
        else {
            arr[++an] = {input[i], 1};
        }
    }
    an++;

    search(0);

    return 0;
}