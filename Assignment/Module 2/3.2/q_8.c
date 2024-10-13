/*WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 
82746*/
#include<stdio.h>
main()
{
	char str[10];
	printf("Enter string1:");
	scanf("%s",&str);
	printf("reverse string:%s",strrev(str));
}
