#include <cstdio>

int main() {
    int c;

    c = getchar();

    // EOF일때까지 입력 받고 출력
    while(c != EOF) {
        putchar(c);
        c = getchar();
    }

    return 0;
}