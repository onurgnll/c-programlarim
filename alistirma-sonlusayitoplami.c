#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//https://www.udemy.com/course/sifirdan-ileri-seviyeye-komple-c-programlama-kursu/learn/lecture/12171794#overview

int main(void){
	
	int min,max, sonuc;
	printf("maximum deger giriniz\n");
	scanf("%d", &max);
	
	min = 1;
	while(min <= max){
		if(min == max){
			printf("%d", min);
			min++;
		}
		else{
			printf("%d + ", min);
			min++;
		}
	}
	
	sonuc = (max* max+1)/2;
	printf(" = %d", sonuc);
	
}
