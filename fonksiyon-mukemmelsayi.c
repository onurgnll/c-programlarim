#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int mukemmelsayimi(int sayim){
	
	int i;
	int bolenlertoplami=0;
	
	for (i=1 ; i < sayim ; i++){
		if (sayim % i == 0){
			bolenlertoplami = bolenlertoplami + i ;
		}
		
	}
	if (bolenlertoplami == sayim){
		return 15;
	
	}	
	if (bolenlertoplami != sayim){
		return 25;
	}
}


int main(){
	
	int sayi,sonuc;
	
	printf("sayiyi seciniz!\n");
	scanf("%d", &sayi);
	
	sonuc = mukemmelsayimi(sayi);
	
	if (sonuc == 15){
		printf("Sayi mukkemmel sayidir.");
	} 
	if (sonuc == 25){
		printf("Sayi mukkemmel sayi degildir.");
	}
	
	return 0;
}
