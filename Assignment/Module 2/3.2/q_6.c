//WAP to print factorial of given number
#include<stdio.h>
main()
{
	int n,fact=1,i;
	printf("Enter number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("Factorial of %d is = %d\n",n,fact);
}
