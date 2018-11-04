#include<stdio.h>
int main(void)
{
	int n,x;
	scanf("%d%d",&n,&x);
	int sum = 0;
	for (int i = n; i < n + x; i++)
	{
		if (i % 7 == 6 || i % 7 == 0)
			continue;
		else
		sum += 250; 
	 } 
	 printf("%d",sum);
	 return 0;
}
