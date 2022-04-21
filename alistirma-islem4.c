#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//https://www.udemy.com/course/sifirdan-ileri-seviyeye-komple-c-programlama-kursu/learn/lecture/12173210#overview

int main(void){
	
	int a,b;
	
	printf("iki sayi giriniz\n");
	scanf("%d%d", &a,&b);
	
	if(a*b > 0){
		printf(">> Sonuc(%d*%d) = +1", a,b);
	}
	if(a*b < 0){
		printf(">> Sonuc(%d*%d) = -1", a,b);
	}
	if(a*b == 0){
		printf(">> Sonuc(%d*%d) = 0", a,b);
	}
	
}
