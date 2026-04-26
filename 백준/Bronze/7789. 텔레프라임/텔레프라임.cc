#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

bool is_prime(int num) {
    if(num == 1) return false;
    for(int i = 2; i < num; i++) {
        if(num % i == 0) return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int a, b;
    cin >> a >> b;
    
    bool ans = is_prime(a) && is_prime(a+b*1000000);

    cout << (ans ? "Yes" : "No");

    return 0;
}