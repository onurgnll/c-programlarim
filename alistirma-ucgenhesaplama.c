#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(void){
	
	int a,b,c;  //https://www.udemy.com/course/sifirdan-ileri-seviyeye-komple-c-programlama-kursu/learn/lecture/11708168#overview
	
	printf("Uc ic aci giriniz.");
	scanf("%d %d %d", &a, &b, &c);
	
	if((a + b + c != 180) || (a<=0) || (b<=0) || (c<=0)) {
		printf("bu bir ucgen degil");
	}
	
	else {
		
		if((a!=b ) && (a!=c) && (b!=c) && (a!=90) && (b!=90) && (c!=90)){
			printf("Bu bir cesitkenar ucgendir.");
		}
		if ((a==b ) && (a!=c) && (b!=c) && (a!=90) && (b!=90) && (c!=90)){
			printf("Bu bir ikizkenar ucgendir.");
		}
		if ((a!=b ) && (a==c) && (b!=c) && (a!=90) && (b!=90) && (c!=90)){
			printf("Bu bir ikizkenar ucgendir.");
		}
		if ((a!=b ) && (a!=c) && (b==c) && (a!=90) && (b!=90) && (c!=90)){
			printf("Bu bir ikizkenar ucgendir.");
		}
		if ((a==b ) && (a==c) && (b==c)){
			printf("Bu bir eskenar ucgendir.");
		}
		if ((a==90 ) || (c==90) || (b==90)){
			printf("Bu bir dik ucgendir.");
		}
	
	}
	
	
	
	return 0;
}


