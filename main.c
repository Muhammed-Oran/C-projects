#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int b,o,y;
	o=9;
	printf("        --Islem Tahmin Oyunu--\n\n\n");
    printf("Oyun Kurallari:\n\n");
    printf("-Aklinizdan 3 basamakli rakamlari farkli bir sayi secin (Ornek:523)\n");
    printf("\n-Sectiginiz 3 basamakli sayidan Yine O sayinin tersini Cikarin(Ornek:523-325)");
    printf("\n\n-Islem Sonucunda Cikan Sayinin (523-325=198) Birler basamagini(Ornek:8) asagiya girin");
    printf("\n\n-UYARI:Sectiginiz 3 Basamakli Sayinin tersi kendisinden buyuk olmamali (Ornek:127,Tersi=721)");
    printf("\n\n\n                    Birler Basamagini Giriniz:");
	scanf("%d",&b);
	y=o-b;
	printf(" \n                 Cikarma Islemininizin Sonucu = %d%d%d\n\n\n\n",y,o,b);
	
	
	
	
	
	
	
	
	
	
	return 0;
}
