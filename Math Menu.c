#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b,c,d,e,menu;
	printf("   *****Math Menu*****\n\n");
	printf("1-Area and Environment Calculation in a Square\n");
	printf("2-Area and Environment Calculation of the Circle\n");
	printf("3-Factor Calculation of the Number Entered\n\n");
	
printf("Your choice:");
scanf("%d",&menu);
switch(menu)
{
	case 1:
		printf("\nEdge of the square:");
		scanf("%d",&a);
		b = a*a;
		c= a*4;
		printf("\n-Area of the Square :%d\n",b);
		printf("-Around the Square :%d",c);
		break;
		case 2 :
			printf("\nEnter the Radius :");
			scanf("%d",&a);
			b = (a*a)*3;
			c = 2*3*a;
			printf("\n-Around the Circle : %d\n",c);
			printf("-Area of the Circle : %d",b);
		break;
		case 3:
			printf("\nNumber of Factors:");
			scanf("%d",&a);
			c=1;
			for(b=1;b<=a;b++)
			{
				
				c=c*b;
				
			}
			printf("\n%d! = %d\n\n",a,c);
			break;
			default:
				printf("\n[Please select one of the 1, 2 and 3 menus.] ");
		}
	return 0;
}
