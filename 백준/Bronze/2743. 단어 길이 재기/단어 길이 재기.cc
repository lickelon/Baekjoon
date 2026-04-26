#include <stdio.h>

int main() {
    char c[101];
    int i = 0;
    scanf("%s", c);
    while (c[i++] != '\0') {}
    printf("%d", --i);
}