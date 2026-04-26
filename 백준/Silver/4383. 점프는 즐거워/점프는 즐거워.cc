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

    string s;
    while(getline(cin, s)) {
        istringstream iss(s);
        int n;
        iss >> n;
        vector<int> arr(n+1);
        int before;
        iss >> before;
        for (int i = 0; i < n; i++) {
            int input;
            iss >> input;
            arr[min(n,abs(input-before))]++;
            before = input;
        }
        bool ans = true;
        for(int i = 1; i < n; i++) {
            ans &= arr[i];
        }
        
        cout << (ans ? "Jolly\n" : "Not jolly\n");
    }

    return 0;
}