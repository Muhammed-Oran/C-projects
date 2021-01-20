#include <stdio.h>
#include <stdlib.h>

// Sýfýr girilene kadar girilen sayilari toplayan program 
int main(int argc, char *argv[]) {
	
	int a,i,t=0;
	while(a!=0)
	{
	    printf("Sayi Giriniz:");
	    scanf("%d",&a);
		t=a+t;
	}
	printf("Toplam: %d",t);
	
	
	
	
	
	
	
	
	return 0;
}
