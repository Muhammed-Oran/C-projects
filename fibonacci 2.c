#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// fibonacci serisinin ilk 10 sayýsý
int a,b,c,d,i;
a = 1;
b = 1;
c = 1; printf("-%d\n-%d\n-%d\n",a,b,c);
for(i=1;i<=7;i++)
{
	d=a+b+c;
	a=b;
	b=c;
	c=d;
	printf("-%d\n",d);
}
 
	return 0;
}
