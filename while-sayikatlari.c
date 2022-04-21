#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//https://www.udemy.com/course/sifirdan-ileri-seviyeye-komple-c-programlama-kursu/learn/lecture/12173214#overview
int main(void){
	
	int m,n,satir;
	m = 0;
	satir = 0;
	printf("n degeri belirleyiniz\n");
	scanf("%d", &n);
	
	while(m<=n){
		printf("%5d", m);
		m = m+17;
		satir++;
		if(satir % 10 ==0){
			printf("\n");
		
		}
	}
	
	return 0;
}

