#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

unsigned int ip_to_uint(string ip) {
    int res = 0;
    int temp = 0;
    for(auto u : ip) {
        if('0' <= u && u <= '9') {
            temp *= 10;
            temp += u - '0';
        }
        else {
            res *= 256;
            res += temp;
            temp = 0;
        }
    }
    return res * 256 + temp;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    unsigned int mask, pivot;
    mask = 0xFFFFFFFF;
    string s;
    cin >> s;
    pivot = ip_to_uint(s);
    for(int i = 1; i < n; i++) {
        cin >> s;
        mask &= ~(pivot ^ ip_to_uint(s));
    }
    bitset<32> bs(mask);
    bool flag = true;
    for(int i = 31; i >= 0; i--) {
        flag &= bs[i];
        bs[i] = flag;
    }
    mask = bs.to_ulong();
    pivot &= mask;
    cout << (pivot / (1 << 24) % (1 << 8)) << "." 
        << (pivot / (1 << 16) % (1 << 8)) << "." 
        << (pivot / (1 << 8) % (1 << 8)) << "." 
        << (pivot / (1 << 0) % (1 << 8)) << "\n";
    cout << (mask / (1 << 24) % (1 << 8)) << "." 
        << (mask / (1 << 16) % (1 << 8)) << "." 
        << (mask / (1 << 8) % (1 << 8)) << "." 
        << (mask / (1 << 0) % (1 << 8)) << "\n";
    return 0;
}