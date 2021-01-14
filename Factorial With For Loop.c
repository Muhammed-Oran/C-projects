#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {


int s1,a,sayac;
sayac=1;
printf("Enter Number :");
scanf("%d",&s1);
for(a=1;a<=s1;a++)
{
	sayac = sayac*a;
}
printf("%d! : %d ",s1,sayac);




	return 0;
}
