#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int s1,s2,a;
int main() {
	
	char Operation;
	printf("First Number :");
	scanf("%d",&s1);
	printf("Second Number :");
	scanf("%d",&s2);
	printf("Operation :");
	scanf("%s",&Operation);
	switch(Operation)
	{
		case '+':
			a = s1+s2;
			printf("Result: %d",a);
			break;
			case '-':
				a = s1-s2;
				printf("Result: %d",a);
				break;
				case '*':
					a = s1*s2;
					printf("Result: %d",a);
					break;
					case '/':
						a = s1/s2;
						printf("Result: %d",a);
						break;
						default:
							printf("The Entered Operation is Incorrect");

	}
	
	
	return 0;
}
