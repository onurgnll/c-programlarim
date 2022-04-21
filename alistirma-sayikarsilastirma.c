#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//https://www.udemy.com/course/sifirdan-ileri-seviyeye-komple-c-programlama-kursu/learn/lecture/12166514#overview
int main(void){
	
	int a,b;
	
	printf("iki sayi girin.\n");
	scanf("%d%d", &a,&b);
	
	if(a==b){
		printf("iki sayi esittir");
	}
	if(a<b){
		printf("%d sayisi %d'den kucukturt", a,b);
	}
	else{
		printf("%d sayisi %d'den buyuktur", a,b);
	}
	
}
