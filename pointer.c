#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int sayi = 10;
	
	int *pointer = &sayi;
	
	char deneme[] = "selam";
	
	int *p = deneme;
	
	printf("%d\n", p);
	
	
	printf("%u\n", *pointer);
	
	printf("%d", pointer);
	
	return 0;
}
