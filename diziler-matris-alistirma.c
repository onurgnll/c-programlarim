#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>


int main(void){
	
	int maxboy=0,numarasi,i,no,a,b;
	int ogrenci[100][2];
	
	no = 0;
	while (no<5){
		for (i=0; i<5; i++){
			printf("%d. Ogrencinin nosunu giriniz\n", i+1);
			scanf("%d", &ogrenci[i][0]);
			printf("%d. Ogrencinin boyunu giriniz\n", i+1);
			scanf("%d", &ogrenci[i][1]);
			no++;	
			for (b=0; b<5; b++){
				if (ogrenci[b][1]>maxboy){
					maxboy = ogrenci[b][1];
					numarasi = ogrenci[b][0];
				}
				else {
					maxboy = maxboy;
				}
			}
		}
	}
	
	for (a=1; a<no+1 ; a++){
		printf("\n%d. Ogrencinin numarasi ve boyu = %d %d", a,ogrenci[a-1][0], ogrenci[a-1][1]);
	}
	printf("\n\nBoyu en uzun ogrenci %d numarali kisi", numarasi);
	
	return 0;
}
