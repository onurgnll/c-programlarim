//https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*
int main(void){
	
	char isim[1];
	int gun,yil,telefon;
	char ay[1];
	
	printf("isim dogum tarihi telefon numarasi giriniz\n");
	scanf("%c %d %c %d %d", &isim, &gun, &ay, &yil, &telefon);
	
	printf("Isim: %d\nDOB: %c %d, %d\nMobile: %d", isim, ay, gun, yil, telefon);
	
	
	
	return 0;
}

int main(void){
	
	int totalgun;
	
	printf("donusturelecek gun sayisinizi yaziniz\n");
	scanf("%d", &totalgun);
	
	int yil,gun,hafta;
	
	yil = totalgun / 365;
	totalgun = totalgun % 365;
	hafta = totalgun / 7;
	totalgun = totalgun % 7;
	gun = totalgun;
	
	
	printf("%d\n", yil);
	printf("%d\n", hafta);
	printf("%d\n", gun);
	
	return 0;
	
	
}

int main() {
	float x1, y1, x2, y2, gdistance;
	printf("Input x1: ");
	scanf("%f", &x1);
	printf("Input y1: ");
	scanf("%f", &y1);
    printf("Input x2: ");
	scanf("%f", &x2);
	printf("Input y2: ");
	scanf("%f", &y2);
	gdistance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
	printf("Distance between the said points: %.4f", sqrt(gdistance));
	printf("\n");
	return 0;
}

int main(void){
	
	float x1,y1,x2,y2,dist;
	
	printf("X1 X2 y1 y2 Degerlerini sirayla giriniz.\n");
	scanf("%f", &x1);
	scanf("%f", &y1);
	scanf("%f", &x2);
	scanf("%f", &y2);
	
	dist = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("%f", dist);
}


*/

int main(void){
	
	int sayi;
	
	printf("Sayi giriniz\n");
	scanf("%d", &sayi);
	
	int yuz,on,bir;
	
	yuz = sayi / 100;
	on = (sayi % 100) / 10;
	bir = ((sayi % 100) % 10);
	
	printf("%d Sayisinin icinde\n%d adet yuzluk\n%d adet onluk\n%d adet bir vardir", sayi, yuz ,on , bir);
	
	
}
