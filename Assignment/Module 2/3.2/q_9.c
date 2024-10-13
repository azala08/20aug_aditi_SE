/*Write a program to find out the max from given number (E.g., No: -1562 
Max number is 6)*/
#include <stdio.h>
main() 
{
    int n,i,max,num;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);
    scanf("%d", &max);

    for (i = 1; i < n; i++) 
	{
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
    }

    printf("Maximum number: %d\n", max);

}
