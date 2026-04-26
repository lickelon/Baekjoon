#include <bits/stdc++.h>

using namespace std;

vector<int> getPi(string P)
{
    int L = (int)P.size();
    vector<int> Pi(L, 0);
    int j = 0;
    for (int i = 1; i < L; ++i)
    {
        while (j > 0 && P[i] != P[j])
            j = Pi[j - 1];
        if (P[i] == P[j])
            Pi[i] = ++j;
    }
    return Pi;
}

int main()
{
    do
    {
        string P;
        cin >> P;
        if(P[0] =='.')
            break;
        auto Pi = getPi(P);
        int L = P.size();
        printf("%d\n", (L % (L - Pi[L - 1])) ? 1 : L / (L - Pi[L - 1]));
    } while (true);
}