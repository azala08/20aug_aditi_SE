//Write a program to find out the max number from given array using function 
#include <stdio.h>
main() 
{
    int n,i, max, num;
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
