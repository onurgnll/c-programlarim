#include <stdio.h>
#include <math.h>
#include <stdlib.h>


//https://www.udemy.com/course/sifirdan-ileri-seviyeye-komple-c-programlama-kursu/learn/lecture/11708174#overview
int main(void){
	
	char islem;
	int sayi1, sayi2;
	char sonuc;
	
	printf("Sayilari giriniz");
	scanf("%d %d", &sayi1, &sayi2);
	printf("islemi giriniz");
	scanf("%s", &islem);
	
	if (islem =='+'){
		
		printf("Cevap\n %d/%d", (sayi1 + sayi2) , (sayi1 * sayi2));
	}
	if (islem =='-'){
		
		printf("Cevap\n %d/%d", (sayi1 - sayi2) , (sayi1 * sayi2));
	}
	
	
}
