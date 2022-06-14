#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){


	int sayi1;
	int sayi2;
	char isaret;
	int sonuc;
	float sonuc2;
	
	printf("Islem yapmak istediginiz 1. Sayiyi giriniz.\n");
	scanf("%d", &sayi1);
	
	printf("Islem yapmak istediginiz 2. Sayiyi giriniz.\n");
	scanf("%d", &sayi2);
	
	printf("Yapmak istediginiz islemi yaziniz.\nKullanilabilir karakterler (/ * + -)\n");
	scanf(" %c", &isaret);
	
	if ( isaret == '+' )
	
	{
		sonuc = sayi1 + sayi2;
		printf("Sonuc = %d", sonuc);
	}
	else if ( isaret == '-' ){
		
		sonuc2 = sayi1 - sayi2;
		printf("Sonuc = %d", sonuc);
	}
		
	else if ( isaret == '*' ){
		
		sonuc = sayi1 * sayi2;
		printf("Sonuc = %d", sonuc);
	}
		
	else if ( isaret == '/' ){
		
		sonuc2 = sayi1 / sayi2;
		printf("Sonuc = %f", sonuc2);
		
	}
	else{
		printf("Gecersiz islem.");
	}
	
	return 0;
}
