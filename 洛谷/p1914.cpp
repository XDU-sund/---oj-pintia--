#include<stdio.h> 
#include<string.h>
int main(void)
{
	int n;
	char a[55];
	scanf("%d",&n);
	scanf("%s",a);
	int b = strlen(a);
	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i]++;
			if (a[i] >'z')
			a[i] = 'a';
		
		}
	}
	printf("%s",a);
	return 0;
}
