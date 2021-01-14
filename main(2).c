#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int yildiz,bosluk,i,j,k,giris;
	printf("Uccgenin Boyu :");
	scanf("%d",&giris);
	yildiz =1;
	bosluk= giris;
	
	for(i=1;i<=giris;i++)
	{
		for(j=1;j<=bosluk;j++)
		{
			printf(" ");
		}
		for(k=1;k<=yildiz;k++)
		{
			printf("*");
		}
		bosluk--;
		yildiz+=2;
		printf("\n");
	}
	
	
	
	
	return 0;
}
