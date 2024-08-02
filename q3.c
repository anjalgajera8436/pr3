#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	
	printf("enter the number:");
	scanf("%d",&num);
	
	int lastdigit=num % 10;
	
	printf("last digit :%d\n",lastdigit);
	
	while (num/10)
	{
	   num=num/10;	
	}
	
	printf("first digit :%d\n\n",num);
	
	printf("sum of the first and last digit : %d",lastdigit+num);
}
