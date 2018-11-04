#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	double sum = 0;
	int k = 0;
	while (sum <= n)
	{
		k++;
		sum += (1.0 / k);
	}
	printf("%d",k);
	return 0;
}
