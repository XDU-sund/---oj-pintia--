#include<stdio.h>
int main(void)
{
	int n, m;
	scanf("%d%d",&n, &m);
	int k = n % m;
	int p = n / m;
	for (int i = 0; i < m - k; i++)
	{
		printf("%d ",p);
	}
	for (int i = 0; i < k; i++)
	{
		printf("%d ",p + 1);
	}
	return 0;
}
