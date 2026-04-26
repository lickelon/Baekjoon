#include <cstdio>
#include <cstring>

int main()
{
    int N;
    char input[51];
    int Pnum;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        Pnum = 0;
        scanf("%s", input);

        for (int j = 0; input[j] != 0 && Pnum >= 0; j++)
        {
            if (input[j] == '(') Pnum++;
            else if (input[j] == ')') Pnum--;
        }
        if (Pnum == 0) printf("YES\n");
        else printf("NO\n");
    }
}