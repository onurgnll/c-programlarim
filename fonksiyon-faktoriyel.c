#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int faktoriyel(int sayim){
	int toplam=1,i;
	
	for (i=1;i<=sayim;i++){
		toplam = toplam * i;
	}
	
	return toplam;
}



int main(){
	int sayi;
	
	printf("Sayi giriniz!\n");
	scanf("%d", &sayi);
	
	
	printf("%d", faktoriyel(sayi));
	
	return 0;
}
