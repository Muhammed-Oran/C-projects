#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int s1,s2,a;
int main() {
	char islem;
	printf("Birinci Sayi :");
	scanf("%d",&s1);
	printf("Ikinci Sayi :");
	scanf("%d",&s2);
	printf("Yapilacak Islem :");
	scanf("%s",&islem);
	switch(islem)
	{
		case '+':
			a = s1+s2;
			printf("Sonuc: %d",a);
			break;
			case '-':
				a = s1-s2;
				printf("Sonuc: %d",a);
				break;
				case '*':
					a = s1*s2;
					printf("Sonuc: %d",a);
					break;
					case '/':
						a = s1/s2;
						printf("Sonuc: %d",a);
						break;
						default:
							printf("Girilen Islem Turu Hatali");

	}
	return 0;
}
