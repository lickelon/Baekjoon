#include <bits/stdc++.h>

using namespace std;

vector<int> getpi(vector<int> P)
{
    int L = P.size(), j = 0;
    vector<int> pi(L, 0);
    for(int i = 1; i < L; i++)
    {
        while(j > 0 && P[i] != P[j])
            j = pi[j - 1];
        if(P[i] == P[j])
            pi[i] = ++j;
    }
    return pi;
}

int KMP(vector<int> S, vector<int> P)
{
    int m = S.size(), n = P.size(), j = 0;
    auto pi = getpi(P);
    for(int i = 0; i < m - 1; i++)
    {
        while(j > 0 && S[i] != P[j])
            j = pi[j - 1];
        if(S[i] == P[j])
        {
            if(j == n - 1)
                return 1;
            else
                j++;
        }
    }
    return 0;
}

vector<int> Make(int N)
{
    int input;
    set<int> S;
    vector<int> V;
    for (int i = 0; i < N; i++) // A입력
    {
        scanf("%d", &input);
        S.insert(input);
    }
    int before = -1;// A구조화
    for(auto k : S) 
    {
        if(before == -1)
        {
            before = k;
            continue;
        }
        V.push_back(k - before);
        before = k;
    }
    V.push_back((*S.begin() - *S.rbegin() + 360000) % 360000);

    return V;
}

int main()
{
    
    int N;
    scanf("%d", &N);

    auto S = Make(N);
    auto P = Make(N);

    for(int i = 0; i < P.size(); i++)
    {
        S.push_back(S[i]);
    }

    if(!KMP(S, P)) printf("im");
    printf("possible");
    return 0;
}