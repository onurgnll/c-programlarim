#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//https://www.udemy.com/course/sifirdan-ileri-seviyeye-komple-c-programlama-kursu/learn/lecture/20126464#overview
int main(void){

	int a,b,c,x,sonuc;
	
	printf("a b c ve x degerlerini sirasi ile giriniz.\n");
	scanf("%d %d %d %d", &a, &b, &c, &x);
	
	printf("Sonuc = %d", a*x*x + b*x + c);


	return 0;
}
