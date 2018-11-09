#include<stdio.h>

int sushu(int m)
{
	for (int i = 2; i < m; i++)
	{
		if (m % i == 0)
		return 0;
	}
	return m;
}

int main(void)
{
	int n;
	scanf("%d",&n);
	for (int i = 4; i <= n; i = i + 2)
	{
		for (int j = 2; j <= i - 2; j++)
		{
			int a1 = sushu(i - j);
			int a2 = sushu(j);
			if (a1 != 0 && a2 != 0)
			{
			printf("%d=%d+%d\n",i,a2,a1);
			break;
			}
		}
	}
	return 0;
}
