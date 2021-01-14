#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int star,space,i,j,k,enter;
	printf(" Triangle Size :");
	scanf("%d",&enter);
	star =1;
	space= enter;
	
	for(i=1;i<=enter;i++)
	{
		for(j=1;j<=space;j++)
		{
			printf(" ");
		}
		for(k=1;k<=star;k++)
		{
			printf("*");
		}
		space--;
		star+=2;
		printf("\n");
	}
	
	
	
	
	return 0;
}
