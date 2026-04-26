#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int visit[1000000];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int A, P;
    cin >> A >> P;

    visit[A] = 1;
    while(true) {
        int before = A;
        int temp = 0;
        while(A) {
            temp += pow(A % 10, P);
            A /= 10;
        }
        A = temp;
        if(visit[A]) break;
        visit[A] = visit[before]+1;
    }
    cout << visit[A] - 1;
    return 0;
}