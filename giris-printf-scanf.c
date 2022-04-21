#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	
	
	int sayi1;
	int sayi2;
	
    printf("Birinci sayiyi giriniz!\n");
	scanf("%d", &sayi1);
    printf("Ikinci sayiyi giriniz!\n");
	scanf("%d", &sayi2);
	
	int toplam;
	toplam = sayi1 + sayi2;
	
	printf("Elde edilen sonuc = %d", toplam);  // scanfde & kullanilir baska yerde kullanilmaz 
	printf("Devam etmek icin 0a basiniz");
	
	int komut;
	

	scanf("%d", &komut);
	
	printf("%d Rakamini girdiniz Isleme Devam ediliyor...", komut);
    
    return 0;
}
