#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*
void tekmiciftmi(int sayi){
	if (sayi%2==0){
		printf("Sayi cift sayidir.");
	}
	else{
		printf("Sayi tek sayidir");
	}
	
}


int main(void)
{
	int sayi,sonuc;
	
	printf("bir sayi giriniz.\n");
	scanf("%d", &sayi);
	tekmiciftmi(sayi);
	
	return 0;	
}

*/


int tekmiciftmi(sayi){
	if (sayi%2==0)
		return 15;
	else
		return 45;
}




int main(void)
{
	int sayi,sonuc;
	
	printf("bir sayi giriniz.\n");
	scanf("%d", &sayi);
	sonuc = tekmiciftmi(sayi);
	
	if (sonuc==15)
		printf("Sayi cift amk.");
	else if (sonuc == 45)
		printf("Sayi tek amk.");
	
	return 0;	
}
