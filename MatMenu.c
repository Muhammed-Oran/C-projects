#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d,e,menu;
	printf("   *****Matematik Menusu*****\n\n");
	printf("1-Karede Alan Ve Cevre Hesabi\n");
	printf("2-Dairenin Alan Ve Cevre Hesabi\n");
	printf("3-Girilen Sayinin Faktoryel Hesabi\n\n");
	
printf("Seciminiz:");
scanf("%d",&menu);
switch(menu)
{
	case 1:
		printf("\nKarenini Bir Kenarini Girin:");
		scanf("%d",&a);
		b = a*a;
		c= a*4;
		printf("\n-Karenin Alani :%d\n",b);
		printf("-Karenin Cevresi :%d",c);
		break;
		case 2 :
			printf("\nYaricapi Giriniz :");
			scanf("%d",&a);
			b = (a*a)*3;
			c = 2*3*a;
			printf("\n-Dairenin Cevresi : %d\n",c);
			printf("-Dairenin Alani : %d",b);
		break;
		case 3:
			printf("\nFaktoryeli Alinacak Sayi :");
			scanf("%d",&a);
			c=1;
			for(b=1;b<=a;b++)
			{
				
				c=c*b;
				
			}
			printf("\n%d! = %d\n\n",a,c);
			break;
			default:
				printf("\n[Lutfen 1,2 ve 3. menulerden birini secin] ");
		}
	return 0;
}
