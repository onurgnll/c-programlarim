#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int usalma(int sayim, int usm){
	
	int i;
	int sonuc=1;
	int ilksayi = sayim;
	
	for (i=1;i<=usm;i++){
		sonuc = sayim * sonuc;
		//sonuc = pow(sayim,usm);
	}
	
	return sonuc;
}


int main(){
	
	int sayi, us;
	
	printf("Ussu alinacak sayiyi girin!\n");
	scanf("%d", &sayi);
	
	printf("Alinacak ussu girin!\n");
	scanf("%d", &us);
	
	printf("%d Sayisinin %d. Ussu %ddir", sayi, us , usalma(sayi,us));
	
	return 0;
}
