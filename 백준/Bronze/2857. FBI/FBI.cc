#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF
#define PI 3.1415927

//#define _ << " " <<
//#define endl "\n"

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //cout<<fixed; cout.precision(2);

    bool flag = false;
    for(int i = 0; i < 5; i++) {
        string s;
        cin >> s;
        if(s.find("FBI") != s.npos) {
            cout << i + 1<< " ";
            flag = true;
        } 
    }
    if(!flag) {
        cout << "HE GOT AWAY!";
    }

    return 0;
}