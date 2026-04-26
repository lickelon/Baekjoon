#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;

using ld = long double;

using pii = pair<int,int>;

using pll = pair<ll, ll>;

vector<int> Pi;

vector<int> getPi(vector<int> &P)

{

    int L = P.size();

    vector<int> _Pi(L);

    int j = 0;

    for(int i = 1; i < L; i++) {

        while(j > 0 && P[i] != P[j]) {

            j = _Pi[j-1];

        }

        if(P[i] == P[j]) {

            _Pi[i] = ++j;

        }

    }

    return _Pi;

}

bool KMP(vector<int> &S, vector<int> &P)

{

    //auto Pi = getPi(P);

    int n = S.size(), m = P.size(), j = 0;

    for(int i = 0; i < n; ++i) {

        while(j > 0 && S[i] != P[j]) {

            j = Pi[j-1];

        }

        if(S[i] == P[j]) {

            if(j == m - 1) {

                return true;

            }

            else {

                j++;

            }

        }

    }

    return false;

}

int main()

{

    ios::sync_with_stdio(0);

    cin.tie(0); cout.tie(0);

    int N;

    cin >> N;

    vector<vector<int>> arr(N);

    for(int i = 0; i < N; i++) {

        int K;

        cin >> K;

        arr[i].resize(K - 1, 0);

        int before;

        cin >> before;

        for(int j = 1; j < K; j++) {

            int input;

            cin >> input;

            arr[i][j-1] = input - before;

            before = input;

        }

    }

    int L;

    cin >> L;

    vector<int> melody(L - 1);

    int before;

    cin >> before;

    for(int j = 1; j < L; j++) {

        int input;

        cin >> input;

        melody[j-1] = input - before;

        before = input;

    }

    Pi = getPi(melody);

    bool found = 0;

    for(int i = 0; i < N; i++) {

        if(KMP(arr[i], melody)) {

            cout << i + 1 << " ";

            found = true;

        }

    }

    if(!found) {

        cout << -1;

    }

    return 0;

}