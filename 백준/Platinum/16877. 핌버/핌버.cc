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

    vector<int> fibo;
    fibo.emplace_back(1), fibo.emplace_back(2);
    while(true) {
        int a = fibo[fibo.size()-2];
        int b = fibo[fibo.size()-1];
        if(a + b > 3000000) break;
        fibo.emplace_back(a+b);
    }
    vector<int> G(3000001);
    for(int i = 1; i <= 3000000; i++) {
        vector<bool> check(fibo.size(), false);
        for(int j = 0; j < fibo.size(); j++) {
            if(i - fibo[j] < 0) break;
            check[G[i-fibo[j]]] = true;
        }
        for(int j = 0; j < fibo.size(); j++) {
            if(!check[j]) {
                G[i] = j;
                break;
            }
        }
    }

    int n;
    cin >> n;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        ans ^= G[input];
    }
    cout << (ans ? "koosaga" : "cubelover");

    return 0;
}