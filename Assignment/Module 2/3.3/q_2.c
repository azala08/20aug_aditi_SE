//WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
#include <stdio.h>
main()
{
    int a, b, c;
    printf("Enter the 1st value =");
    scanf("%d", &a);
    printf("Enter the 2nd value =");
    scanf("%d", &b);
    printf("Press \n 1 for Addition \n 2 for Subtraction \n 3 for Multiplication \n 4 for Division\n");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        printf("Addition= %d", a + b);
        break;
    case 2:
        printf("Subtraction= %d", a - b);
        break;
    case 3:
        printf("Multiplication= %d", a * b);
        break;
    case 4:
        printf("Division= %d", a / b);
        break;
    default:
    printf("Please enter valid number");
        break;
    }
}
