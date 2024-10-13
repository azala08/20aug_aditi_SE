//WAP to find area of circle, rectangle and triangle

#include<stdio.h>
float pi=3.14;
main()
{
	//area of circle
	float circle,rec;
	int r,b,h,w,h1,tri;
	printf("Area of circle");
	printf("\n===================\n\n");
	
 	printf("enter value of R :");
 	scanf("%d",&r);
	circle=pi*r*r;
	printf("Area of circle : %f",circle);
	
	//area of rectangle	 	
	printf("\n\nArea of Rectangle");
	printf("\n===================\n\n");	 	
	printf("enter value of B :");
 	scanf("%d",&b);
	printf("enter value of H :");
	scanf("%d",&h);
	rec=(b*h)/2;
	printf("Area of rectangle: %f",rec);	
	
	//area of triangle
	printf("\n\nArea of Triangle");
	printf("\n===================\n\n");	 	
	printf("enter value of W :");
 	scanf("%d",&w);
	printf("enter value of H :");
	scanf("%d",&h1);
	tri=w*h1;
	printf("Area of Triangle: %d",tri); 	
}
