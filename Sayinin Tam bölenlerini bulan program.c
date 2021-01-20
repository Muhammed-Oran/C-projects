#include <stdio.h>
#include <stdlib.h>

// Sayinin Tam bölenlerini bulan program
int main(int argc, char *argv[]) {
	int i,a;
	printf("Sayi:");
	scanf("%d",&a);
	printf("\n%d Sayisinin Tam Sayi Bolenleri \n\n",a);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			printf("%d\n",i);
		}
	}
	
	
	
	return 0;
}
