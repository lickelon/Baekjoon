#define isAlphabet(X) ( (65 <= X && X <= 90) || (97 <= X && X <= 122) )
#define isWordEnd(X) ( (X == EOF || X == ' ') )
#include <cstdio>

int main() {
    char c;
    int count = 0;
    bool flag = 0;
    if (getchar() != ' ') {
        count++;
        flag = 1;
    }
    while ((c = getchar()) && c != EOF) {
        if (isWordEnd(c)) flag = 0;
        else if (isAlphabet(c) && !flag)
        {
            flag = 1;
            count++;
        }
    }
    printf("%d", count);
    return 0;
}