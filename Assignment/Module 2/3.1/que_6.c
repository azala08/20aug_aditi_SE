// que_6WAP to convert years into days and days into years 
#include<stdio.h>
void main()
{
	int years,days,y,d;
	printf("Enter years:");
	scanf("%d",&years);
	days = years * 365;
	printf("days are:%d",days);
	
	printf("\n\nEnter days:");
	scanf("%d",&d);
	y=d/365;
	printf("years is:%d",y);
	
}












