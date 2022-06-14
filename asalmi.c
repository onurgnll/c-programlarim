#include <stdio.h>
#include <math.h>
#include <windows.h>

int main(void){
	int sayi,i,tambolen=0;
	
	scanf("%d", &sayi);
	for (i=1; i<=sayi; i++)
		if (sayi%i==0)
			tambolen++;
			if (tambolen==2){
				printf("%d Sayisi asaldir\n", sayi);
			}
			else{
			
				printf("%d Sayisi asal degildir\n", sayi);
			}
	return 0;
}
