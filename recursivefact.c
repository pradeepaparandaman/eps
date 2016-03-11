#include<stdio.h>
int main()
{
	int n,fact;
	scanf("%d",&n);
	fact=facto(n);
	printf("%d",fact);
	return 0;
}
int facto(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*facto(n-1);
	}
}
