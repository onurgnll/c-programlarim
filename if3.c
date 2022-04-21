#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(void){
	
	int gunlukfiyat = 200;
	char isim[100];
	
	printf("Isminizi ogrenebilir miyim?\n");
	scanf("%s", &isim);
	
	printf("Otelimize hosgeldiniz %s Bey\n", isim);
	printf("\nKac gun konaklama yapacaksiniz?\n");
	
	int konaklamagunu;
	scanf("%d", &konaklamagunu);
	
	if ((konaklamagunu >=7) && (konaklamagunu<=14)){
		
		printf("7 ila 14 Gun arasinda konaklamayi sectiniz.\nFiyatlarimiz %%20 daha ucuz olacaktir\nUcretiniz %d", konaklamagunu * gunlukfiyat * 4 / 5);
		
	}	
	
	if ((konaklamagunu>0) && (konaklamagunu < 7)){
		
		
		printf("7 gun ve alti konaklamalarda indirim uygulanmiyor\nUcretiniz = %d TL", konaklamagunu * gunlukfiyat);
		
	}

	if (konaklamagunu>14){
		
		printf("14 Gun ve ustu konaklamada %%30 indirim firsati kazandiniz\nUcretiniz = %d", konaklamagunu * gunlukfiyat * 70 / 100);
		
	}
	
	if (konaklamagunu <= 0) {
		printf("gecersiz gun");
	}
	
	return 0;
}
