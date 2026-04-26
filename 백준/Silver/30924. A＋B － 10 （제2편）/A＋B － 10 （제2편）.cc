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
    vector<int> candA;
    vector<int> candB;
    for(int i = 0; i < 10000; i++) {
        candA.emplace_back(i+1);
        candB.emplace_back(i+1);
    }

    random_shuffle(all(candA));
    random_shuffle(all(candB));

    int ansA = 0;
    int ansB = 0;
    int resp;
    for(int i = 0; i < 10000; i++) {
        cout << "? A " << candA[i] << endl;
        cin >> resp;
        if(resp) {
            ansA = candA[i];
            break;
        }
    }
    for(int i = 0; i < 10000; i++) {
        cout << "? B " << candB[i] << endl;
        cin >> resp;
        if(resp) {
            ansB = candB[i];
            break;
        }
    }

    cout << "! " << ansA + ansB;

    return 0;
}