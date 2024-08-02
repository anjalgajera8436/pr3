#include<stdio.h>
#include<conio.h>

 main()
{
	char ch ='A';
	
	do{
		printf("%c\t",ch);
		ch+=4;
	}while(ch<='Z');
}
