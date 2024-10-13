//WAP to find simple interest 
#include<stdio.h>
main()
{
	int p,r,t;
	float simple_int;
	printf("Enter value of P: ");
	scanf("%d",&p);
	printf("Enter value of R: ");
	scanf("%d",&r);
	printf("Enter value of T: ");
	scanf("%d",&t);
	simple_int=p*r*t/100;
	printf("Simple interest of given value is: %f",simple_int);
}



