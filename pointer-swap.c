#include <stdio.h>

/*
void swap(int a,int b)
{
	
	printf("burada %d %d", a, b);
	
	int temp;
	
	temp = b; 
	b = a;
	a = temp;
	
	printf("burada %d %d", a, b);
	
}


int main(void)
{
	int sayi1,sayi2;
	
	int *psayi1 , *psayi2;
	
	
	printf("yerleri degistirilecek sayilari giriniz.\n");
	scanf("%d %d", &sayi1, &sayi2);
	
	psayi1 = &sayi1;
	psayi2 = &sayi2;
	
	swap(*psayi1, *psayi2);
	
	
	return 0;
}

///////////////////////////////////1. YOL BUYDUUUU
*/


int swap(int *pa, int *pb){
	
	printf("a suan bu %d\n", *pa);
	
	int temp;
	
	temp = *pa;
	
	*pa = *pb;
	
	*pb = temp;
	
	
	
	printf("after swap a = %d b = %d", *pa, *pb);
	
}


int main(void){
	
	
	int a = 1;
	int b = 2;
	
	swap(&a,&b);
	
	
}


