#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char a[23];
	int b,i;
	printf("Your Name:");
	scanf("%s",a);
	printf("\n-Hello %s welcome . I am Domdis Can you guess the number in my mind ?\n\n-Tip = The number in my mind between 1 and 10\n\n-Warning:You Only Have 5 right",a);
	printf("\n\n\nEnter Your guess :");
	scanf("%d",&b);
	for(i=1;i<=4;i++) {
      if(b != 2)
	{
		printf("\nThe number in my mind isn't %d\n",b);
		printf("Please Try Again:");
		scanf("%d",&b);
	
	
	}
	
	else
	{
		printf("\n**The number in my mind was %d . You found it ,Domdis congratulate you.**",b);
		return 0;
	}
	 }
 
  printf("\n\n         --Your Rights Are Over and Domdis is Very Upset Because you did'nt Guess Correctly--\n\n");

	
	return 0;
}
