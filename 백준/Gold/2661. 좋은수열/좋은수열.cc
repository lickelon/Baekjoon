#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int result[81];
int N;
bool jobDone = false;
bool checkBad(int step) {
    for(int i = 1; step - i * 2 + 1 >= 0; i++) {
        int a = step - i + 1;
        int b = a - i;
        bool isBad = true;
        for(int j = 0; j < i; j++) {
            if(result[a+j] != result[b+j]) isBad = false;
        }
        if(isBad) {
            return false;
        }
    }
    return true;
}

void func(int step) {
    if(jobDone) return;
    if(step == N) {
        for(int i = 0; i < N; i++) {
            cout << result[i];
        }
        jobDone = true;
    }
    for(int i = 1; i <= 3; i++) {
        result[step] = i;
        if(checkBad(step)) func(step + 1);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> N;
    func(0);

    return 0;
}