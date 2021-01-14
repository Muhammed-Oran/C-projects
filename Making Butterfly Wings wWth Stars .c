#include <stdio.h>
#include <stdlib.h>

//Making Butterfly Wings wWth Stars 
int main() {
int i,j,k,l;

for(i=1;i<=5;i++)
{
	for(j=1;j<=i;j++)
	{
		printf("*");
	}
	for(k=5;k>=i;k--)
	{
		printf(" ");
	}
	for(k=5;k>=i;k--)
	{
		printf(" ");
	}
	
		for(l=1;l<=i;l++)
		{
				printf("*");
		}
	
	printf("\n");

	
}

for(i=1;i<=5;i++)
{
	for(j=5;j>=i;j--)
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
	
		for(l=5;l>=i;l--)
		{
				printf("*");
		}
	
	printf("\n");

	
}



	return 0;
}
