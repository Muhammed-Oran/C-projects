#include <stdio.h>
#include <stdlib.h>

//Sayinin Küpünü bulma
int main(int argc, char *argv[]) {
	int a;
	printf("Kupu Alinacak Sayi:");
	scanf("%d",&a);
	a=a*a*a;
	printf("%d",a);
	
	
	return 0;
}
