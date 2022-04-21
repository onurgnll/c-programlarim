#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int urun,para,yuklenen;
	ilk:
	printf("Paranizi kutuya atiniz\n");
	scanf("%d", &para);
	uc:
	printf("Bakiye yuklendi\nBakiyeniz = %d\n\n", para);
	iki:
	printf("Almak istediginiz urunu seciniz>>\n1. Su satin al 2 TL\n2. Kek satin al 5 TL\n3. Gofret satin al 10 TL\n\n0. Cik\n9. Bakiye yukle\n");
	scanf("%d", &urun);
	
	
	switch(urun){
		case 1: 
			if(para >= 2){
				para = para - 2;
				printf("Su satin alindi\nKalan bakiye %d\n", para);
				goto iki;
			}
			else{
				printf("Yeterli Paraniz Bulunmuyor\n");
				goto ilk;
			}
		break;
		case 2: 
			if(para >= 5){
				para = para - 5;
				printf("Kek satin alindi\nKalan bakiye %d\n", para);
				goto iki;
			}
			else{
				printf("Yeterli Paraniz Bulunmuyor\n");
				goto ilk;
			}
		break;
		case 3: 
			if(para >= 10){
				para = para - 10;
				printf("Gofret satin alindi\nKalan bakiye %d\n", para);
				goto iki;
			}
			else{
				printf("Yeterli Paraniz Bulunmuyor\n");
				goto ilk;
			}
		break;
		case 0:
		break;
		case 9:
			printf("Para yuklenmesi bekleniyor\n");
			scanf("%d", &yuklenen);
			para = para + yuklenen;
			goto uc;
		break;
		default:
			printf("Boyle bir islem bulunmuyor\n");
			goto ilk;
		break;
	}
	
	
	return 0;
}

