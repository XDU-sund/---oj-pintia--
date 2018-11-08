#include<stdio.h> 
int main(void)
{
	int n;
	scanf("%d",&n);
	int map[n][n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		map[i][j] = 0;
	
	int m1,m2;
	scanf("%d%d",&m1,&m2);
	for (int i = 0; i < m1; i++)
	{
		int x,y;
		scanf("%d%d",&x,&y);
		x = x - 1;
		y = y - 1;
		map[x][y] = 1;
		if (y + 1 <= n)
		map[x][y + 1] = 1;
		if (y + 2 <= n)
		map[x][y + 2] = 1;
		if (x + 1 <= n)
		map[x + 1][y] = 1;
		if (x + 2 <= n)
		map[x + 2][y] = 1;
		if (x - 1 >= 0)
		map[x - 1][y] = 1;
		if (x - 2 >= 0)
		map[x - 2][y] = 1;
		if(y - 1 >= 0)
		map[x][y - 1] = 1;
		if (y - 2 >= 0)
		map[x][y - 2] = 1;
		
		if (x - 1 >= 0 && y + 1 <= n)
		map[x - 1][y + 1] = 1;
		if (x - 1 >= 0 && y - 1 >= 0)
		map[x - 1][y - 1] = 1;
		if(x + 1 <= n && y + 1 <= n)
		map[x + 1][y + 1] = 1;
		if (x + 1 <= n && y - 1 >= 0)
		map[x + 1][y - 1] = 1;
		
	}
	
	for (int i = 0; i < m2; i++)
	{
		int x,y;
		scanf("%d%d",&x,&y);
		x = x - 1;
		y = y - 1;
		map[x][y] = 1;
		if (x - 2 >= 0 && y - 2 >= 0) 
		map[x - 2][y - 2] = 1;
		if (x - 1 >= 0 && y - 2 >= 0)
		map[x - 1][y - 2] = 1;
		if (y - 2 >= 0)
		map[x][y - 2] = 1;
		if (x + 1 <= n && y - 2 >= 0)
		map[x + 1][y - 2] = 1;
		if (x + 2 <= n && y - 2 >= 0)
		map[x + 2][y - 2] = 1;
		
		if (x - 2 >= 0 && y - 1 >= 0)
		map[x - 2][y - 1] = 1;
		if (x - 1 >= 0 && y - 1 >= 0)
		map[x - 1][y - 1] = 1;
		if (y - 1 >= 0)
		map[x][y - 1] = 1;
		if (x + 1 <= n && y - 1 >= 0)
		map[x + 1][y - 1] = 1;
		if (x + 2 <= n && y - 1 >= 0)
		map[x + 2][y - 1] = 1;
		
		if(x - 2 >= 0)
		map[x - 2][y] = 1;
		if (x - 1 >= 0)
		map[x - 1][y] = 1;
		if (x + 1 <= n)
		map[x + 1][y] = 1;
		if (x + 2 <= n)
		map[x + 2][y] = 1;
		
		if (x - 2 >= 0 && y + 1 <= n)
		map[x - 2][y + 1] = 1;
		if (x - 1 >= 0 && y + 1 <= n)
		map[x - 1][y + 1] = 1;
		if (y + 1 <= n)
		map[x][y + 1] = 1;
		if (x + 1 <= n && y + 1 <= n)
		map[x + 1][y + 1] = 1;
		if (x + 2 <= n && y + 1 <= n)
		map[x + 2][y + 1] = 1;
		
		if (x - 2 >= 0 && y + 2 <= n)
		map[x - 2][y + 2] = 1;
		if (x - 1 >= 0 && y + 2 <= n)
		map[x - 1][y + 2] = 1;
		if (y + 2 <= n)
		map[x][y + 2] = 1;
		if (x + 1 <= n && y + 2 <= n)
		map[x + 1][y + 2] = 1;
		if (x + 2 <= n && y + 2 <= n)
		map[x + 2][y + 2] = 1;

	}
	int k = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		if (map[i][j] == 0)
		k++;
	printf("%d",k);
	return 0;
}
