#include<stdio.h>
#include<string.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i = 0; i < n; i++)
		scanf("%d",&a[i]);
	int max = 0;
	
	for (int i = 0; i < n - 1; i++)
	{
		int temp = 0;
		for (int j = i + 1; j < n;j++)
		{
			if (a[j] == a[j - 1] + 1)
				temp++;
			else
				break; 
		}
		if (temp > max)
			max = temp;
	}

		
	
		
	printf("%d",max + 1);
	return 0;
}
