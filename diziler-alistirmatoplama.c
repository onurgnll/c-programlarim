#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){
	
	int a,toplam=0;
	int yasar[999];
	int sonuc;
	
	printf("bu program klavyeden girdiginiz sayilari toplar.\n4 Adet sayi girin\n");
	
	a=0;
	while (a<4){
		scanf("%d", &yasar[a]);
		a++;
	}
	
	for (a=0; a<4; a++){
		toplam += yasar[a];
	}
	
	printf("Sonuc = %d", toplam);
	return 0;
}
