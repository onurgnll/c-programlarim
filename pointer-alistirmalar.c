#include <stdio.h>

///https://www.udemy.com/course/sifirdan-ileri-seviyeye-komple-c-programlama-kursu/learn/lecture/32400118#overview

/*

int main(void)
{
	int a = 5;
	char b = "onur" ; 
	double c = 3.5151;
	float d = 5.1 ;
	
	
	
	printf("%d", sizeof(d));
	
}



int main(void){
	
	int a = 5;
	int b = 8;

	int *pa ;
	
	pa = &a;
	
	int *pb ;
	
	pb = &b;
	
	
	printf("%d", *pa + *pb);

	return 0;
}




int main(void){
	
	int dizi[100];
	
	int n;
	
	int i;
	
	printf("Dizi kac elemanli olsun?\n");
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++){
		
		printf("%d. Elemani giriniz\n", (i+1));
		scanf("%d", &dizi[i]);
	
	}
	return 0;
}



*/

#include <ctype.h>

/* atof: convert string s to double */
double atof(char s[])
{
        double val, power;
        int i, sign;

        for (i = 0; isspace(s[i]); i++) /* skip white space */
                ;
        sign = (s[i] == '-') ? -1 : 1;
        if (s[i] == '+' || s[i] == '-')
                i++;
        for (val = 0.0; isdigit(s[i]); i++)
                val = 10.0 * val + (s[i] - '0');
        if (s[i] == '.')
                i++;
        for (power = 1.0; isdigit(s[i]); i++) {
                val = 10.0 * val + (s[i] - '0');
                power *= 10;
        }

        return sign * val / power;
}

int main(void){
}













