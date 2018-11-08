#include<stdio.h>

int main(void)
{
	int m;
	scanf("%d",&m);
	for (int i = 2; i <= m; i++)
	{
		if (m % i == 0)
		{
		printf("%d",m / i);
		break;
		}
	}
	return 0;
}
