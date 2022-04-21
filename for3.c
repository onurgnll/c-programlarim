#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){
	
	int i,min, max;
	printf("2nin ussunun kaca kadar alinacagini soyleyin.\n");
	scanf("%d", &max);
	printf("\nn     2^n\n-------");
	
	for(min=0; min<=max; min++){
		int us;
		us = pow(2,min);
		printf("\n%3d %3d", min,us);
		
		
	}
	
	return 0;
}

