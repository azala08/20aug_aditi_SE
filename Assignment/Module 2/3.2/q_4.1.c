/*WAP to show 
1. Monday to Sunday using switch case 
2. Vowel or Consonant using switch case*/
#include<stdio.h>
main()
{
	int ch;
	printf("Enter number 1-7 to see day ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1: 
		printf("monday");
		break;
		
		case 2: 
		printf("tuesday");
		break;
		
    	case 3: 
		printf("wednesday");
		break;
		
		case 4: 
		printf("thursday");
		break;
		
		case 5: 
		printf("friday");
		break;
		
		case 6: 
		printf("saturday");
		break;
		
		case 7: 
		printf("sunday");
		break;
		        
		default: 
		printf("enter valid days...");
		break;
	}
}
