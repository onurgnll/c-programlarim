#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(void){
	
	int i,min, max;
	
	
	printf("Select a minimum limit point.\n");
	scanf("%d", &min);
	
	printf("Select a maximum limit point.\n");
	scanf("%d", &max);
	
	for(i=min; i<=max; i++){
		
		printf("%d ", i);
		
	}
	
	
	return 0;
}

