#include <stdio.h>
#include <math.h>
#include <stdlib.h>


// WHILE DONGUSU ------------------------------------------------------------------------

int main(){
	
	int sayi;
	scanf(" %d", &sayi);
	
	
	while (sayi < 50){   // sayi 50den kucuk oldugu surece bu islemi yap
		
		printf("\n%d", sayi);
		sayi = sayi + 3;
		
		
	}
	while (sayi >= 50 && sayi < 1000){
		
		printf("\n%d", sayi);
		sayi = sayi + 50;
	}
	
	
	
	return 0;
	
	
}


