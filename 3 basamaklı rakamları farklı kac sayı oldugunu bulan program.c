#include <stdio.h>
#include <stdlib.h>

// 3 basamakl� rakamlar� farkl� kac say� oldugunu bulan program
int main() {
	
	int i,b,y,o,s=0;
	for(i=100;i<1000;i++)
	{
		b=i%10;
		y=i/100;
		o=(i/10)%10;
		if(b!=o && b!=y && y!=b && y!=o )
		{
			s++; //�nemmli Ayr�nt�
		}
	}
	
	printf("%d",sayac);
	return 0;
}
