#include <cstdio>

int main() {
    int arr[42] = { 0, };
    int input;
    int result = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &input);
        arr[input % 42] = 1;
    }
    for (int i = 0; i < 42; i++)
    {
        if (arr[i] == 1) result += 1;
    }
    printf("%d", result);
}