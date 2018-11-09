#include<stdio.h>
int main(void)
{
	int n,x;
	scanf("%d%d",&n,&x);
	int k = 0;
	int temp;
	for (int i = 1; i <= n; i++)
	{
		int p = i;
		while (p != 0)
		{
			int q = p % 10;
			p = p / 10;
			if (q == x)
			k++;
		}
	}
	printf("%d",k);
	return 0;
}
