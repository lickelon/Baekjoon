#include <bits/stdc++.h>

using namespace std;

vector<int> getPi(string P)
{
    int L = (int)P.size();
    vector<int> Pi(L,0);
    int j = 0;
    for(int i = 1; i < L; ++i)
    {
        while(j > 0 && P[i] != P[j])
        {
            j = Pi[j-1];
        }
        if(P[i] == P[j])
        {
            Pi[i] = ++j;
        }
    }
    return Pi;
}

int main()
{
    int N;
    string P;

    cin >> N >> P;
    auto Pi = getPi(P);
    printf("%d", N - Pi[N-1]);
}