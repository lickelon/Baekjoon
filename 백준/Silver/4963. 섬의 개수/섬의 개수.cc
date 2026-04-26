/*made by 20201591 Giryeong Son*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int field[50][50];

int w, h;

void DFS(int row, int col)
{
	int flag = 0;
	field[row][col] = 0;
	if(row-1 >= 0 && col-1 >= 0 && field[row-1][col-1]) flag |= 1;
	if(col-1 >= 0 && field[row][col-1]) flag |= 2;
	if(row+1 < w && col-1 >= 0 && field[row+1][col-1]) flag |= 4;
	if(row+1 < w && field[row+1][col]) flag |= 8;
	if(row+1 < w && col+1 < h && field[row+1][col+1]) flag |= 16;
	if(col+1 < h && field[row][col+1]) flag |= 32;
	if(row-1 >= 0 && col+1 < h && field[row-1][col+1]) flag |= 64;
	if(row-1 >= 0 && field[row-1][col]) flag |= 128;

	if(flag & 1) DFS(row-1, col-1);
	if(flag & 2) DFS(row, col-1);
	if(flag & 4) DFS(row+1, col-1);
	if(flag & 8) DFS(row+1, col);
	if(flag & 16) DFS(row+1, col+1);
	if(flag & 32) DFS(row, col+1);
	if(flag & 64) DFS(row-1, col+1);
	if(flag & 128) DFS(row-1, col);
}

int main()
{
	while(1)
	{
		scanf("%d %d", &w, &h);
		if(w == 0 && h == 0) break;
		for(int i = 0; i < 50; i++)
		{
			for(int j = 0; j < 50; j++)
			{
				field[j][i] = 0;
			}
		}
		for(int i = 0; i < h; i++)
		{
			for(int j = 0; j < w; j++)
			{
				scanf("%d", &field[j][i]);
			}
		}
		int answer = 0;
		for(int i = 0; i < h; i++)
		{
			for(int j = 0; j < w; j++)
			{
				if(field[j][i] == 1)
				{
					DFS(j, i);
					answer++;
				}
			}
		}
		printf("%d\n", answer);
	}
	return 0;
}
