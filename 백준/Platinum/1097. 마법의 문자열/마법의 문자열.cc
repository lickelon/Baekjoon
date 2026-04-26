#include <bits/stdc++.h>

using namespace std;

int K;
vector<int> getPi(string P)
{
    int L = (int)P.size();
    vector<int> Pi(L, 0);
    int j = 0;
    for (int i = 1; i < L; ++i)
    {
        while (j > 0 && P[i] != P[j]) j = Pi[j - 1];
        if (P[i] == P[j]) Pi[i] = ++j;
    }
    return Pi;
}

int solve(vector<int> permutation, vector<string> _sv)
{
    int count = 0;
    do
    {
        string S = _sv[0];
        for (int i = 1; i <= (int)permutation.size(); ++i) S += _sv[permutation[i - 1]];
        int M = (int)S.size();
        auto Pi = getPi(S);
        int T = M - Pi[M - 1];
        if(K != 1 && T * K == M) count++;
        if(K == 1 && (M % T != 0 || M == T)) count++;
    } while(next_permutation(permutation.begin(),permutation.end()));
    return count;
}

int main()
{
    int N;
    vector<string> _sv;
    vector<int> permutation;
    string _S;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i)
    {
        cin >> _S;
        _sv.push_back(_S);
        permutation.push_back(i + 1);
    }
    scanf("%d", &K);
    permutation.pop_back();

    printf("%d", solve(permutation, _sv) * N);
    return 0;
}