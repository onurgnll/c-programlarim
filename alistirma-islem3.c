#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//https://www.udemy.com/course/sifirdan-ileri-seviyeye-komple-c-programlama-kursu/learn/lecture/12173202#overview

int main(void){
	float x;
	printf("Bir x degeri giriniz\n");
	scanf("%f", &x);
	
	printf(">> f(%.3f) = %.3f", x, x*x*x+13*x*x+47*x+5);
	
	
	return 0;
}
