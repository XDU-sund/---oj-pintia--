#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	int b[n];
	for (int i = 0; i < n; i++)
		b[i] = 0;
	
	for (int i = 0; i < n; i++)
		for (int j = i - 1; j >= 0; j--)
			if (a[i] > a[j])
				b[i]++;
	
	
	for (int i = 0; i < n; i++)
	printf("%d ",b[i]);
	return 0;
}
