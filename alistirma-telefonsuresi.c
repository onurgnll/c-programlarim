#include <stdio.h>
#include <math.h>
#include <stdlib.h>


//https://www.udemy.com/course/sifirdan-ileri-seviyeye-komple-c-programlama-kursu/learn/lecture/11708170#overview

int main(void){
	
	float sure,ekucret,ucret,eksure,sonucret;
	ucret = 0.25;
	ekucret = 0.08;
	printf("telefonda konusma suresi. (dakika)\n");
	scanf("%f", &sure);
	if (sure > 3 ){
		
		sonucret = ((sure - 3) * ekucret) + 0.25;
		printf("Telefonda Konusma sureniz %.2f dk\nUcretiniz = %.2f ", sure, sonucret);
		
	}
	else{
		printf("Telefon konusma sureniz 3 dkyi gecmedi ek ucret uygulanmayacak\n");
		sonucret = ucret;
		printf("Ucretiniz = %.2f", sonucret);
	}
	
	
	return 0;
}
