#include <stdio.h>

int main() {
    char word[101];
    scanf("%s", word);

    for (int i = 0; word[i] != 0; i++) {
        
        putchar(word[i]);
        if ((i + 1) % 10 == 0) {
            putchar('\n');
        }
    }
    return 0;
}