#include <stdio.h>
#include <math.h>
#include <stdlib.h>



int main(void){
	
	int a=25;
	int b;
	
	printf("B Sayisini giriniz!");
	scanf("%d", &b);
	
	if (a<b && b>=50){ //  && ve isareti
		float islem;
		islem = b/a;
		printf("%.2f", islem);
	}
	
	if (a>=b || b==0){  // || yada isaretidir 
		float islem2;
		islem2 = a+b;
		printf("%.2f", islem2);
	}
	
	return 0;
}


