#include<stdio.h>
int main(void)
{
	double a[49];
	a[0] = 0;
	a[1] = 1;
	a[2] = 1;
	int n;
	int i;
	scanf("%d",&n);
	for (i = 3; i <= n; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
	}
	printf("%0.2lf",a[n]);
	return 0;
}
