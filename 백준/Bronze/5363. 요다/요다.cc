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
    string temp;
    getline(cin, temp);
    while(n--) {
        string input;
        getline(cin, input);
        istringstream iss(input);
        
        string word;
        string save[2];
        for(int i = 0; getline(iss, word, ' '); i++) {
            if(i < 2) save[i] = word;
            else cout << word << " ";
        }
        cout << save[0] << " " << save[1] << "\n";
    }

    return 0;
}