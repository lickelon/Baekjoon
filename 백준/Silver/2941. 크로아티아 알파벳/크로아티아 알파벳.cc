#include <cstdio>

int main()
{
	char input[101];
	int i = 0, count = 0;
	scanf("%s", input);
	while (input[i])
	{
		switch (input[i])
		{
		case '=':
			switch (input[i - 1])
			{
			case 'z':
				if (input[i - 2] == 'd') count++;
			case 'c':
			case 's':
				count++;
			}
			break;
		case '-':
			if (input[i - 1] == 'c' || input[i - 1] == 'd') count++;
			break;
		case 'j':
			if (input[i - 1] == 'l' || input[i - 1] == 'n') count++;
			break;
		}
		i++;
	}
	printf("%d", i - count);
}