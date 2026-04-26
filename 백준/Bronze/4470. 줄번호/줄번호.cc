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
    string f;
    getline(cin, f);
    for(int i = 0; i < N; i++) {
        string s;
        getline(cin, s);
        cout << i + 1 << ". " << s << '\n';
    }

    return 0;
}