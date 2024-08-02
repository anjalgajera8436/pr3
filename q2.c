#include<stdio.h>
#include<conio.h>

void main()
{
	int num,count=0;
	
	printf("enter the number");
	scanf("%d",&num);                   
	
	do{
		num/=10;
		count++;
	}while(num !=0);
	
	printf("total digits: %d\n",count);
}
