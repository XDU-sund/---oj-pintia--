#include<stdio.h>
int main(void)
{
	int n;
	
	scanf("%d",&n);
	int a[40000];
	int k = 0;
	int sum = 0;
	
	for (int i = 0; i < 40000; i++)
	a[i] = 0;
	
	for (int i = 0; i < 40000; i++)
	{
	scanf("%d",&a[i]);
	k++;
	sum += a[i];
	if (sum == n * n)
	break;
	
	}
	
	int temp = 0;
	int q = 0;
	while (q <= k)
	{
		if (q % 2 == 0)
		for (int i = 0; i < a[q]; i++)
		{
			printf("0");
			temp++;
			if (temp % n == 0)
			{
				printf("\n");
				temp = 0;
			}
		}
		
		else
		for (int i = 0; i < a[q]; i++)
		{
			printf("1");
			temp++;
			if (temp % n == 0)
			{
				printf("\n");
				temp = 0;
			}
		}
		q++;
	}
	
	

	return 0;
}
