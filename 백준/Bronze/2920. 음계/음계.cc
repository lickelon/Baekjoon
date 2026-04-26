#include <cstdio>

int main()
{
	int num;
	int stat;
	scanf("%d", &num);
	stat = num;
	for(int i = 1; i < 8; i++)
	{
		scanf("%d", &num);
		if (stat == 8 && num == stat - i) {}
		else if (stat == 1 && num == i + 1) {}
		else stat = 0;
	}
	if (stat == 8) printf("descending");
	if (stat == 1) printf("ascending");
	if (stat == 0) printf("mixed");
}
