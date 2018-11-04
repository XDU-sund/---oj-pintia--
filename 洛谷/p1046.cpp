#include<stdio.h>
int main(void)
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d",&a[i]);
	}
	int tall;
	scanf("%d",&tall);
	int k = 0;
	for (int i = 0; i < 10; i++)
	{
		if (tall + 30 >= a[i])
			k++;
	}
	printf("%d",k);
	return 0;
}
