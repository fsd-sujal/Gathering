#include<stdio.h>

int sum(int a[]={12,89,57,65,35,387,35,354,63,3,90})
{
	int a[];
	int i,len;
	len = sizeof(a)/sizeof(0);
	printf("Length Of aLL ARRAY =",len);
	for(i=0;i<=len;i++)
	{
		printf("%d\n",a[i]);
	}
	return len;
}
void main()
{
	int i;
	printf("Enter The Element Of Array = ");
	
	printf("Sum Of Array's All Element = %d",sum(a));
}
