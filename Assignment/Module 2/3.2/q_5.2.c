/*WAP to take 10 no. Input from user and find out … 
. How many Even numbers are there 
. How many odd numbers are there 
. Sum of even numbers 
. Sum of odd numbers */
#include <stdio.h>
int main()
 {
    int num[10];
    int i, even=0,e_sum=0,odd=0,o_sum=0;

    printf("Enter 3 numbers:\n");
    for (i = 0; i <10; i++) 
	{
        scanf("%d", &num[i]);
    } 
    for (i = 0; i <10; i++) 
	{
        if (num[i] % 2==0) 
		{
            even++;
            e_sum=e_sum+num[i];
        }
        else
        {
        	odd++;
        	o_sum=o_sum+num[i];
		}
    }
    printf("There are %d even numbers.\n", even);
    printf("Sum of even no:%d\n",e_sum);
    printf("There are %d odd numbers.\n", odd);
    printf("Sum of odd no:%d",o_sum);
    
}
