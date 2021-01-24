#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
		
   
    int b,o,y;
    char a[30];
    printf("Your Name:");
    scanf("%s",a);
    o=9;
    printf("\n\n         -- Welcome to my Operation Guessing Game %s , I'am Tezos --\n\n\n",a);
    sleep(2);
    printf("Game Rules:\n\n");
    sleep(2);
    printf("-Choose a number with 3 digits and different numbers from your mind (Example: 523)\n");
    sleep(3);
    printf("\n-Again, subtract the opposite of that number from the 3-digit number you chose (Example: 523-325)");
    sleep(5);
    printf("\n\n-Enter (523-325 = 198) the ones digit (Example: 8) of the resulting number");
    sleep(5);
	printf("\n\n-WARNING: The inverse of the 3-Digit Number you have chosen must not be greater than itself (Example: 127, Inverse = 721)");
    sleep(5);
	printf("\n\n\n                    Enter the Ones Digit:");
	scanf("%d",&b);
	printf("");
	y=o-b;
	printf(" \n                     The Outcome of Your Extraction = %d%d%d\n\n\n\n",y,o,b);
	
	

	
	return 0;
}
	
	
	
	
	
	
	
	
	
	

