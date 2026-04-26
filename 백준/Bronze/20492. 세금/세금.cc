#include <stdio.h>

int main()
{
    double a;
    
    scanf("%lf", &a);
    
    printf("%d %d", int(a * 0.78), int(a * 0.956));
    
    return 0;
}