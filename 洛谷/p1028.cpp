#include<stdio.h>
int main(void)
{
	int n;
	int f[1000];
	scanf("%d",&n);
	f[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		f[i] = f[i - 1];
		if (i % 2 == 0)
		f[i] += f[i / 2];
		
	}
	printf("%d",f[n]);
	return 0;
}
