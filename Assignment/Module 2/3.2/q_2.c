//que_2 WAP to swap two numbers without using third variable
#include<stdio.h>
main()
{
	int a,b;
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	printf("before swap a=%d b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nafter swap a=%d b=%d",a,b);	
}

