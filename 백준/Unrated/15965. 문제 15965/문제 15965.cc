#include <bits/stdc++.h>

using namespace std;

vector<int> get_primes(int n) {
    vector<int> primes;
    vector<int> sieve(n+1);
    
    for(int i = 2; i <= n; i++) {
        if(sieve[i]) continue;
        primes.emplace_back(i);
        for(int j = i; j <= n; j += i) {
            sieve[j] = 1;
        }
    }
    return primes;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> primes = get_primes(10000000);
    println("{}", primes[n-1]);

    return 0;
}