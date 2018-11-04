#include<stdio.h>
int main(void)
{
	int k;
	scanf("%d",&k);
	int i;
	int kase = 0;
	for (i = 10000; i < 30001; i++)
	{
		int a1 = i / 100;
		int a2 = (i % 10000) / 10;
		int a3 = i % 1000;
		if (a1 % k == 0 && a2 % k == 0 && a3 % k == 0)
		{ 
			printf("%d\n",i);
			kase++;
		}
	 } 
	 if (kase == 0)
	 printf("No");
	return 0;
}
