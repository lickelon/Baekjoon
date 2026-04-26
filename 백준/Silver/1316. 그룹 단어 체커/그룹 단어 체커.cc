#include <cstdio>
#include <cstring>
int main()
{
	int T, count = 0;
	char input[101], now;
	bool End[26] = {0,};
	scanf("%d", &T);
	for (int j = 0; j < T; j++)
	{
		scanf("%s", input);
		now = input[0];
		for (int i = 1; input[i]; i++)
		{
			if (End[input[i] - 'a'])
			{
				count--;
				break;
			}
			if (now != input[i])
			{
				End[now - 'a'] = 1;
				now = input[i];
			}
		}
		count++;
		memset(End, 0, 26);
	}
	printf("%d", count);
}