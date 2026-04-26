#include <stdio.h>

int main()
{
	char name[4] = { 0, };
	int sum = 0;
	scanf("%c", &name[0]);
	scanf("%c", &name[1]);
	scanf("%c", &name[2]);
	sum += name[0] & 0x0000000F;
	sum *= 64;
	sum += name[1] & 0x0000003F;
	sum *= 64;
	sum += name[2] & 0x0000003F;
	printf("%d", sum - 44031);
}