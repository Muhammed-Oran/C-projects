#include <stdio.h>
#include <stdlib.h>

//Making Butterfly Wings wWth Stars 
int main() {
int i,j,k;

for(i=1;i<=10;i++)
{
	for(j=1;j<=i;j++)
	{
		printf("*");
	}
	for(k=10;k>=i;k--)
	{
		printf(" ");
	}
	for(k=10;k>=i;k--)
	{
		printf(" ");
	}
	
		for(l=1;l<=i;l++)
		{
				printf("*");
		}
	
	printf("\n");

	
}

for(i=1;i<=10;i++)
{
	for(j=10;j>=i;j--)
	{
		printf("*");
	}
	for(k=1;k<=i;k++)
	{
		printf(" ");
	}
	for(k=1;k<=i;k++)
	{
		printf(" ");
	}
	
		for(l=10;l>=i;l--)
		{
				printf("*");
		}
	
	printf("\n");

	
}




	return 0;
}
