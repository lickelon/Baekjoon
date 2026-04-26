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

    int a;
    cin >> a;
    if(620 <= a && a <= 780) cout << "Red";
    if(590 <= a && a < 620) cout << "Orange";
    if(570 <= a && a < 590) cout << "Yellow";
    if(495 <= a && a < 570) cout << "Green";
    if(450 <= a && a < 495) cout << "Blue";
    if(425 <= a && a < 450) cout << "Indigo";
    if(380 <= a && a < 425) cout << "Violet";

    return 0;
}