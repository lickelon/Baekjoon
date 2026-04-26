#include <cstdio>

int main()
{
	int A, B, V;
	scanf("%d %d %d", &A, &B, &V);
	V -= A;
	printf("%d", V % (A - B) == 0 ? V / (A - B) + 1 : V / (A - B) + 2);
}