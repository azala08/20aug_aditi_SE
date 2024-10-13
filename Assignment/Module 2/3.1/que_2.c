//Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)

#include<stdio.h>
void main()
{
	int a,b,sum,sub,mul,div,mdl;
	printf("enter value of a:");
	scanf("%d",&a);
	printf("enter value of b:");
	scanf("%d",&b);
	
	printf("\naddition: %d",sum=a+b);
	printf("\nsubtraction: %d",sub=a-b);
	printf("\nmultiplication: %d",mul=a*b);
	printf("\ndivision: %d",div=a/b);
	printf("\nmodule: %d",mdl=a%b);
}



