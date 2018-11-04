#include<stdio.h>
#include<string.h> 
int main(void)
{
	char a[6];
	char b[6];
	scanf("%s%s",a,b);
	int l1 = strlen(a);
	int l2 = strlen(b);
	int k1 = a[0] - 'A' + 1;
	int k2 = b[0] - 'A' + 1;
	for (int i = 1; i < l1; i++)
	{
		k1 *= (a[i] - 'A' + 1);
	}
	for (int i = 1; i < l2; i++)
	{
		k2 *= (b[i] - 'A' + 1);
	}
	
	int s1 = k1 % 47;
	int s2 = k2 % 47;
	
	if (s1 == s2)
	printf("GO");
	else 
	printf("STAY");
	return 0;
}
