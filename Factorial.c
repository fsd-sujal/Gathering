#include<stdio.h>

int fact(int n)
{
	int f;
	if(n<=1)
	{
		return 1;
	}
	else
	{
		f=n*fact(n-1);
		return f;
	}
}
void main()
{
	int n;
	printf("Enter The Number = ");
	scanf("%d",&n);
	printf("Factorial = %d",fact(n));
}
