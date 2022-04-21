#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(void){
	
	int min,max;
	
	min = 1;
	max = 100;
	
	while(min<max){
		if((min%3 == 0) && (min%5 != 0)){
		
			printf("fizz ");
			min++;
		}
		if(min%5 == 0 && min%3 != 0){
			printf("buzz ");
			min++;
		}
		if (min%15 == 0){
			printf("fizzbuzz ");
			min++;
		}
		else
		{
		printf("%d ", min);
		min++;
		}
		
		
		
		
	}
	
	return 0;
}

