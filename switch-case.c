#include <stdio.h>
#include <Math.h>
#include <stdlib.h>

int main(){
	char gun;
	printf("Hangi gunun ders programi?");
	scanf("%c", &gun);
	
	switch(gun){
		case pazartesi:
			printf("Pazartesi gunu\nMatematik 8.15 - 10.00\nProgramlama 10.00 - 12.00");
		break;
		case 'sali':
			printf("Sali gunu\nMatematik 8.15 - 10.00\nProgramlama 10.00 - 12.00");
		break;
		case 'carsamba':
			printf("Carsamba gunu\nMatematik 8.15 - 10.00\nProgramlama 10.00 - 12.00");
		break;
		case 'persembe':
			printf("Persembe gunu\nMatematik 8.15 - 10.00\nProgramlama 10.00 - 12.00");
		break;
		case 'cuma':
			printf("Cuma gunu\nMatematik 8.15 - 10.00\nProgramlama 10.00 - 12.00");
		break;
		default:
			printf("boyle gun yok");
		break;
		
	}
}
