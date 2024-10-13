////WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice
#include<stdio.h>
int sort(int a[],int b)
{
	int i, j,tmp;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
		 if (a[j] > a[i] )
		 {
		 	tmp = a[j];
		 	a[j]=a[i];
		 	a[i]=tmp;
		  }	
		  else if (a[i] > a[j])
		  {
		  	tmp = a[i];
		  	a[i] = a[j];
		  	a[j] = tmp;
		  }
		}
	}
}

main()
{
	int a[5], b[5], ch , i;
	printf("Enter first array : ");
	for(i=0 ; i<5 ; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter second array : ");
	for(i=0 ; i<5 ; i++)
	{
		scanf("%d", &b[i]);
	}
	printf("\n select choice \n 1 = ASCENDING \n 2 = DECENDING  : ");
	scanf("%d",&ch);
	
	sort(a, ch);
	sort(b, ch);
	printf("first array : \n");
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
		printf("\n");
	}
	printf("second array : \n ");
	for(i=0;i<5;i++)
	{
		printf("%d",b[i]);
		printf("\n");
	}
	
	
}
