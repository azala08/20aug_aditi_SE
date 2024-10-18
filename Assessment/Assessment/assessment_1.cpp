#include<stdio.h>
#include<string.h>
char str[100],str2[10],strc[10],s[80];
void rev()
{
	printf("Enter any string:");
	scanf("%s",&str);
	printf("reverse string:%s",strrev(str));
}
void cat() 
{
	printf("Enter string1:");
	scanf("%s",&str);
	printf("Enter string2:");
	scanf("%s",&strc);
	printf("Concat string:%s",strcat(str,strc));
}
void palindrome()
{
	int i,n,c=0;
	printf("Enter string:");
	scanf("%s",&str);
	n=strlen(str);
	for(i=0;i<=n/2;i++)
	{
		if(str[i]==str[n-i-1])
		c++;
	}
	if(c==1)
	{
		printf("String is palindrom..!");
	}
	else
	{
		printf("String is not palindrom..!");
	}
}	
void cpy()   
{ 
	char strc[10];
	printf("Enter string1:");
	scanf("%s",&str);
	printf("Copy string:%s",strcpy(strc,str));
} 
void length()
{
	printf("Enter any string:");
	scanf("%s",&str);
	printf("Length of string is:%d",strlen(str));
}
void freq()
{
	char str[100], ch;
    int count = 0, i;
    
    printf("Enter a string: ");
    scanf("%s", str); 
    
    printf("Enter a character to find its frequency: ");
    scanf(" %c", &ch);
    
    for(i = 0; str[i] != '\0'; i++) 
	{
        if(str[i] == ch)  
        {
        	count++;
		}
    }
    printf("Frequency of %c = %d\n", ch, count);
}
void vow()
{
    char s[80];
    int i, vowels = 0, consonants = 0, special = 0;
 
    printf("Enter a sentence \n");
    scanf("%s",&s);
    
    for (i = 0; s[i] != '\0'; i++)
    {
        if ((s[i] == 'a' || s[i] == 'e' || s[i] ==
        'i' || s[i] == 'o' || s[i] == 'u') ||
        (s[i] == 'A' || s[i] == 'E' || s[i] ==
        'I' || s[i] == 'O' || s[i] == 'U'))
        {
            vowels = vowels + 1;
        }
        else
        {
            consonants = consonants + 1;
        }
        if (s[i] =='\t' ||s[i] =='\0' || s[i] ==' ')
        {
            special = special + 1;
        }
    }
    consonants = consonants - special;
    printf("No. of vowels in %s = %d\n", s, vowels);
    printf("No. of consonants in %s = %d\n", s, consonants);
}
void finddigits()
{
	char newstr[100];
    int i, spe = 0, digit = 0;

    printf("Enter a string to find blank spaces and digits: ");
    getchar();
    fgets(newstr, sizeof(newstr), stdin); 

    for (i = 0; newstr[i] != '\0'; i++)
	{
        if (newstr[i] == ' ') 
		{
            spe++;
        } 
		else if (newstr[i] >= '0' && newstr[i] <= '9') 
		{
            digit++;
        }
    }

    printf("\nNumber of blank spaces = %d", spe);
    printf("\nNumber of digits = %d", digit);
}
main()
{
	int choice;
	int ch;
	again:
	printf("\n1. Reverse a String  \n2. Concatenation\n3. Palindrome\n4. Copy a string\n5. Length of the string\n6. Frequency of character in s string\n7. Find number of vowels and consonants\n8. Find number of blank spaces and digits");
	printf("\n\nSelect your choice:");
	scanf("%d",&choice);
	switch(choice) 
	{
			case 1:
			rev();
			break;
			
			case 2:
			cat();
			break;
			
			case 3:
			palindrome();
			break;
				
			case 4:
			cpy();
			break;
			
		   	case 5:
		    length();
		    break;
			
			case 6:
			freq();
			break;
			
			case 7:
			vow();
			break;
			
			case 8:
			finddigits();
			break;
				
			default:
			printf("Exit");
			break;
				
	}
	printf("\n\nDo you want to continue press 1 to continue....");
	scanf("%d",&ch);
	if(ch==1)
	{
	 	goto again;
	}
}
