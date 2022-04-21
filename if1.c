#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){
	
	int sayi;
	
	printf("Bir sayi girin\nSectiginiz sayi 250den buyukse 2ye bolunecek degilse 2 ile carpilacak\n");
	scanf("%d", &sayi);
	
	if(sayi < 250){
		sayi = sayi*2;
		printf("Olusan sayi= %d", sayi);
	}
	else{
		sayi = sayi/2;
		printf("Olusan sayi= %d", sayi);
	}
	
	
	return 0;
}
