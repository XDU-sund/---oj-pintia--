#include<stdio.h> 
int main(void)
{
	int n;
	scanf("%d",&n);
	int a1,a2;
	int sum = 0;
	int lost = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d",&a1,&a2);
		lost += (a1 + a2 - 8);
		sum += lost;
	}
	printf("%d",sum);
	return 0;
}
