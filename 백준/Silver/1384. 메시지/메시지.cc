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

    int t = 0;
    while(++t) {
        int n;
        cin >> n;
        if(!n) break;
        vector<string> names(n);
        vector<vector<int>> data(n);
        for(int i = 0; i < n; i++) {
            cin >> names[i];
            string temp;
            data[i].resize(n-1);
            for(int j = 0; j < n-1; j++) {
                cin >> temp;
                if(temp[0] == 'P') data[i][j] = 0;
                else data[i][j] = 1; 
            }
        }
        cout << "Group " << t << "\n";
        bool flag = false;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n-1; j++) {
                if(data[i][j]) {
                    flag = true;
                    cout << names[(n+i-j-1)%n] << " was nasty about " << names[i] << "\n";
                }
            }
        }
        if(!flag) cout << "Nobody was nasty\n";
        cout << "\n";
    }

    return 0;
}