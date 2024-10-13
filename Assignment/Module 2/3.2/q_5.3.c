//WAP to print table up to given numbers
#include<stdio.h>
main()
{
	int a,i;
	printf("Enter value: ");
	scanf("%d",&a);
	printf("Table of %d is:\n",a);
    for (i = 1; i <= 10; i++) 
	{
        printf("%d * %d = %d\n",a,i,a*i);
    }
}

