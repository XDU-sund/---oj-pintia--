#include<stdio.h> 
int main(void)
{
	int a[100];
	int i;
	for (i = 0; i < 100; i++)
	{
		scanf("%d",&a[i]);
		if (a[i] == 0)
		break;
		else 
		continue;
	}
	
	for (int j = i - 1; j >= 0; j--)
	{
		printf("%d ",a[j]);
	}
	return 0;
}
