#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void toplama(int a, int b){
	
	printf("\n################## TOPLAMA MAKINESI ##################\n");
	printf("\nToplama islemi yapmak istediginiz Sayilari seciniz\n");
	scanf("%d %d", &a,&b);
	printf("Toplama isleminin Sonucu = %d", a+b);
}

void cikarma(int a, int b){
	
	printf("\n################## CIKARMA MAKINESI ##################\n");
	printf("\nCikarma islemi yapmak istediginiz Sayilari seciniz\n");
	scanf("%d %d", &a,&b);
	printf("Toplama isleminin Sonucu = %d", a-b);
}

void bolme(float a, float b){
	
	printf("\n################## BOLME MAKINESI ##################\n");
	printf("\nBolme islemi yapmak istediginiz Sayilari seciniz\n");
	scanf("%f %f", &a,&b);
	
	printf("Toplama isleminin Sonucu = %.2f", a/b);
}

void carpma(int a, int b){
	
	printf("\n################## CARPMA MAKINESI ##################\n");
	printf("\nCarpma islemi yapmak istediginiz Sayilari seciniz\n");
	scanf("%d %d", &a,&b);
	
	printf("Carpma isleminin Sonucu = %d", a*b);
}

void karekok(int a){
	
	float sonuc;
	
	printf("\n################## KAREKOK MAKINESI ##################\n");
	printf("\nKarekokunu almak istediginiz Sayiyi seciniz\n");
	scanf("%d", &a);
	
	sonuc = sqrt(a);
	
	printf("Bu sayinin karekoku = %.3f", sonuc);
	
}

void usalma(int a, int b){
	
	int sonuc;
	
	printf("\n################## US ALMA MAKINESI ##################\n");
	printf("\nUssunu almak istediginiz sayiyi seciniz\n");
	scanf("%d", &a);
	printf("\nAlinacak ussu seciniz\n");
	scanf("%d", &b);
	
	sonuc = pow(a,b);
	
	printf("%d Sayisinin %d. ussu = %d", a,b,sonuc);
}


int main(void){
	
	char isim[100];
	int islem;
	int a,b;
	
	printf("Fonksiyonel hesap makinesine hosgeldiniz.\n\nIsminizi giriniz\n\n");
	scanf("%s", &isim);
	printf("\n");
	
	printf("%s Bey Yapmak istediginiz islemi giriniz\n", isim);
	ilk:
	printf("1. Toplama \n2.Cikarma\n3.Bolme\n4.Carpma\n5.Karekok alma\n6.Us alma\n\n9.Cikis\n");
	
	scanf("%d", &islem);
	
	
	switch(islem){
		case 1:
			toplama(a,b);
		break;
		case 2:
			cikarma(a,b);
		break;
		case 3:
			bolme(a,b);
		break;
		case 4:
			carpma(a,b);
		break;
		case 5:
			karekok(a);
		break;
		case 6:
			usalma(a,b);
		break;
		case 9:
		break;
		default:
			printf("Gecersiz islem!\n");
			goto ilk;
	}
}
