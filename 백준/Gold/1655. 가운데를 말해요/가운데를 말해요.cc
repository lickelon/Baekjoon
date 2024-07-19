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
    priority_queue<int> D;
    priority_queue<int, vector<int>, greater<int>> U;
    D.push(-INF);
    U.push(INF);
    
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        if(input < D.top()) {
            D.push(input);
            while(D.size() - 1 > U.size()) {
                U.push(D.top());
                D.pop();
            }
        }
        else {
            U.push(input);
            while(D.size() < U.size()) {
                D.push(U.top());
                U.pop();
            }
        }
        cout << D.top() << "\n";
    }

    return 0;
}