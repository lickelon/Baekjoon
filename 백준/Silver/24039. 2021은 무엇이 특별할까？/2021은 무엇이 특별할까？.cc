#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

bool is_prime(int num) {
    for(int i = 2; i * i <= num; i++) {
        if(num % i == 0) return false;
    }
    return true;
}

int next_prime(int num) {
    while(!is_prime(++num));
    return num;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    int pa = 2, pb = 3;
    while(pa * pb <= n) {
        pa = pb;
        pb = next_prime(pb);
    }
    cout << pa * pb;

    return 0;
}