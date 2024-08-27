#include <cstdio>

int main() {
    int arr[6] = { 1,1,2,2,2,8 };
    int temp;
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &temp);
        printf("%d ",arr[i] - temp);
    }
}