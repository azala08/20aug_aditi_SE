//12.Patterns: 

/* 1)
1                   
2 3                 
4 5 6                   
7 8 9 10            
11 12 13 14 15
*/

#include <stdio.h>
int i,j,k;
int main()
{
    int a = 1, b = 65;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", a);
            a++;
        }
        printf("\n");   
    } 
    printf("\n\n");


/* 2)
A
B C
D E F
G H I J
K L M N O
*/

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", b);
            b++;
        }
        printf("\n");   
    } 
    printf("\n\n");

/* 3)
A
A B
A B C
A B C D
A B C D E
*/
    b = 65;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", b);
            b++;
        }
        b = 65;
        printf("\n");   
    } 
    printf("\n\n");


/* 4)
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/

    a = 1;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ",a % 2);
           
            // if (a % 2 == 0)
            // {
            //     printf("0");
            //     printf("\t");
            // }
            // else
            // {
            //     printf("1");
            //     printf("\t");
            // }
            a++;
        } 
        a = 1;
        printf("\n");
    }
    printf("\n\n");


/* 5)
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *         

*/

for (i = 0; i < 5; i++)
{
    for (j = 0; j < 2 * (5 - i) -1; j++)
    {
        printf(" ");
    }
    for (k = 0; k < 2 * i + 1; k++)
    {
        printf("* ");
    }
    printf("\n");
}


printf("\n\n");


/* 6)
*
* *
* * * 
* * * * 
* * * * * 
* * * * * *
* * * * *
* * * * 
* * *
* *
*
*/


for (i = 1; i <= 6; i++)
{
    for (j = 0; j < i; j++)
    {
        printf("* ");
    }
    printf("\n");
}
for (i = 5; i >= 1; i--)
{
    for (j = i; j >= 1; j--)
    {
        printf("* ");
    }
    printf("\n");
}
}

