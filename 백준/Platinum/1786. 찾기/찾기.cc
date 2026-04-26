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

vector<int> KMP(string S, string P)
{
    vector<int> ans;
    auto Pi = getPi(P);

    int n = (int)S.size(), m = (int)P.size(), j = 0;

    for(int i = 0; i < n; ++i)
    {
        while(j > 0 && S[i] != P[j])
        {
            j = Pi[j-1];
        }
        if(S[i] == P[j])
        {
            if(j == m - 1)
            {
                ans.push_back(i - m + 2);
                j = Pi[j];
            }
            else
            {
                j++;
            }
        }
    }
    return ans;
}

int main()
{
    string S, P;
    getline(cin, S);
    getline(cin, P);

    auto ans = KMP(S,P);
    printf("%d\n",(int)ans.size());
    for(auto k : ans)
    {
        printf("%d ", k);
    }
}