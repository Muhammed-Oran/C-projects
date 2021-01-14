#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char a[23];
	int b,i;
	i=5; // Right to try
	printf("Your Name:");
	scanf("%s",a);
	printf("\n-Hello %s welcome . I am Domdis Can you guess the number in my mind ?\n\n",a);
	printf("-Tip = The number in my mind between 1 and 10");
	printf("\n\n-Warning:You Only Have %d right",i);
	printf("\n\n\nEnter Your guess :");
	scanf("%d",&b);
	for(i=i-1;i>=1;i--) {
      if(b != 2)
	{
		printf("\nThe number in my mind isn't %d         (You have %d attempts left)\n\n",b,i);
		printf("Please Try Again:");
		scanf("%d",&b);
	if(i==1) // If this line of code is not used, the program will not evaluate your final guess.So even if we guessed the number correctly, it turned output: 
		//--Your Rights Are Over and Domdis is Very Upset Because you did'nt Guess Correctly--
	{
		if(b!=2)
		{
				printf("\nThe number in my mind isn't %d",b);
		}
		else
		{
				printf("\n**The number in my mind was %d . You found it ,Domdis congratulate you.**",b);
				return 0;
		}
	}
	
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
