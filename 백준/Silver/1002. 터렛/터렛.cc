#include <cstdio>

int main()
{
    int N;
    int x1, y1, r1, x2, y2, r2;
    int dist1, dist2, dist3;
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        if (x1 == x2 && y1 == y2)
        {
            if (r1 == r2) printf("-1");
            else printf("0");
        }
        else
        {
            dist1 = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1); // 9
            dist2 = (r1 + r2) * (r1 + r2); // 100
            dist3 = (r1 - r2) * (r1 - r2); // 16
            if (dist1 < dist2 && dist3 < dist1) printf("2");
            else if (dist1 == dist2) printf("1");
            else
            {
                if (dist3 == dist1) printf("1");
                else printf("0");
            }
        }
        printf("\n");
    }
}