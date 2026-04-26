#include <bits/stdc++.h>

#define INF 0x7FFFFFFF
#define MAX 4000001
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

vector<int> prime;

int arr[MAX];

void e_sieve() {
    for(int i = 2; i < MAX; i++) {
        if(arr[i]) continue;
        for(int j = i * 2; j < MAX; j += i) {
            arr[j] = 1;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    e_sieve();
    for(int i = 2; i < MAX; i++) {
        if(!arr[i]) prime.emplace_back(i);
    }

    int N;
    cin >> N;

    int st = 0;
    int sum = 0;
    int ans = 0;
    for(int ed = 0; ed < prime.size(); ed++) {
        sum += prime[ed];
        while(sum > N) {
            sum -= prime[st++];
        }
        if(sum == N) {
            ans++;
        }
    }

    cout << ans;

    return 0;
}