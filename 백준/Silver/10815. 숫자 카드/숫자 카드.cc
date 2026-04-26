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

    int N;
    cin >> N;
    set<int> _s;

    int input;
    for(int i = 0; i < N; i++) {
        cin >> input;
        _s.insert(input);
    }

    int M;
    cin >> M;
    for(int i = 0; i < M; i++) {
        cin >> input;
        if(_s.find(input) == _s.end()) cout << "0 ";
        else cout << "1 ";
    }
    

    return 0;
}