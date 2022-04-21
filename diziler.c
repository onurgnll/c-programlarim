#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main(void){
	
	int i,onur;
	int dizi[9999];
	ilk:
	printf("Bir n sayisi giriniz!\n");
	scanf("%d", &onur);
	if (onur>10000)
	{
		printf("n sayisi 10000den buyuk olmamali\n");
		goto ilk;
	}
	else
	{
		for (i=0; i<onur/2+1; i++)
		{
			dizi[i]=i*2;
			printf("%d\n", dizi[i]);
		}
	}
	return 0;
}
