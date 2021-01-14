#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int s,f,i;
printf("Faktoriyeli Alinacak Sayi:");
scanf("%d",&s);
i=1;
f=1;
while(i<=s){
	f=f*i;
	i++;
}
printf("%d",f);
	
	
	
	return 0;
}


