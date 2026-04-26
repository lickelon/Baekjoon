#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

int ca[] = {1,2,3,3,4,10};
int cb[] = {1,2,2,2,3,5,10};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout<<fixed; cout.precision(1);

    int n, m;
    cin >> n;
    string s;
    getline(cin, s);
    vector<string> arr(n);
    for(int i = 0; i < n; i++) 
        getline(cin, arr[i]);

    cin >> m;
    for(int i = 0; i < m; i++) {
        int a;
        cin >> a;
        cout << "Rule " << a << ": ";
        if(a <= 0 || a > n) {
            cout << "No such rule\n";
        }
        else cout << arr[a-1] << "\n";
    }

    return 0;
}