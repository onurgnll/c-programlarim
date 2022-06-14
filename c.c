#include <stdio.h>
#include <Math.h>
#include <stdlib.h>

//-----------------------------------------------------------------------------------------------------

/*
int main(){
	
	
	int sayi1;
	int sayi2;
	
    printf("Birinci sayiyi giriniz!\n");
	scanf("%d", &sayi1);
    printf("Ikinci sayiyi giriniz!\n");
	scanf("%d", &sayi2);
	
	int toplam;
	toplam = sayi1 + sayi2;
	
	printf("Elde edilen sonuc = %d", toplam);  // scanfde & kullanilir baska yerde kullanilmaz 
	printf("Devam etmek icin 0a basiniz");
	
	int komut;
	

	scanf("%d", &komut);
	
	printf("%d Rakamini girdiniz Isleme Devam ediliyor...", komut);
    
    return 0;
}
*/

//-----------------------------------------------------------------------------------------------------

/*
int main(){
	
	
	float sayi1 = 3.145898;
	
	printf("%f\n", sayi1);
	printf("%.3f", sayi1);  //Burasi noktadan sonra kac basamak onu gosterir
	
	return 0;
}
*/



// % isareti mod almadir



//----------------------------------------------------------------------------------------------------

/*

== ESIT MI ANLAMINDA

!= ESIT DEGÝLSE

<= KUCUKESÝTSE

>= BUYUK ESITSE

> BUYUKTUR

< KUCUKTUR




//-------------------------------------------------------------------------




int main(void){
	
	int a;
	
	scanf("%d", &a);
	
	if(a == 15){
		printf("A 15e esittir");
	}
	if(a>15){
		printf("A 15den buyuktur");
	}
	if(a<15){
		printf("A 15den kucuktur");
	}
	
	return 0;
}



// IF YAPISI

int main(void){
	
	int sayi;
	
	printf("Bir sayi girin\nSectiginiz sayi 250den buyukse 2ye bolunecek degilse 2 ile carpilacak\n");
	scanf("%d", &sayi);
	
	if(sayi < 250){
		sayi = sayi*2;
		printf("Olusan sayi= %d", sayi);
	}
	else{
		sayi = sayi/2;
		printf("Olusan sayi= %d", sayi);
	}
	
	
	return 0;
}




int main(void){
	
	int a=25;
	int b;
	
	printf("B Sayisini giriniz!");
	scanf("%d", &b);
	
	if (a<b && b>=50){ //  && ve isareti
		float islem;
		islem = b/a;
		printf("%.2f", islem);
	}
	
	if (a>=b || b==0){  // || yada isaretidir 
		float islem2;
		islem2 = a+b;
		printf("%.2f", islem2);
	}
	
	return 0;
}






int main(void){
	
	int gunlukfiyat = 200;
	char isim[100];
	
	printf("Isminizi ogrenebilir miyim?\n");
	scanf("%s", &isim);
	
	printf("Otelimize hosgeldiniz %s Bey\n", isim);
	printf("\nKac gun konaklama yapacaksiniz?\n");
	
	int konaklamagunu;
	scanf("%d", &konaklamagunu);
	
	if ((konaklamagunu >=7) && (konaklamagunu<=14)){
		
		printf("7 ila 14 Gun arasinda konaklamayi sectiniz.\nFiyatlarimiz %%20 daha ucuz olacaktir\nUcretiniz %d", konaklamagunu * gunlukfiyat * 4 / 5);
		
	}	
	
	if ((konaklamagunu>0) && (konaklamagunu < 7)){
		
		
		printf("7 gun ve alti konaklamalarda indirim uygulanmiyor\nUcretiniz = %d TL", konaklamagunu * gunlukfiyat);
		
	}

	if (konaklamagunu>14){
		
		printf("14 Gun ve ustu konaklamada %%30 indirim firsati kazandiniz\nUcretiniz = %d", konaklamagunu * gunlukfiyat * 70 / 100);
		
	}
	
	if (konaklamagunu <= 0) {
		printf("gecersiz gun");
	}
	
	return 0;
}




int main(){


	int sayi1;
	int sayi2;
	char isaret;
	int sonuc;
	float sonuc2;
	
	printf("Islem yapmak istediginiz 1. Sayiyi giriniz.\n");
	scanf("%d", &sayi1);
	
	printf("Islem yapmak istediginiz 2. Sayiyi giriniz.\n");
	scanf("%d", &sayi2);
	
	printf("Yapmak istediginiz islemi yaziniz.\nKullanilabilir karakterler (/ * + -)\n");
	scanf(" %c", &isaret);
	
	if ( isaret == '+' )
	
	{
		sonuc = sayi1 + sayi2;
		printf("Sonuc = %d", sonuc);
	}
	else if ( isaret == '-' ){
		
		sonuc2 = sayi1 - sayi2;
		printf("Sonuc = %d", sonuc);
	}
		
	else if ( isaret == '*' ){
		
		sonuc2 = sayi1 * sayi2;
		printf("Sonuc = %d", sonuc);
	}
		
	else if ( isaret == '/' ){
		
		sonuc2 = sayi1 / sayi2;
		printf("Sonuc = %f", sonuc2);
		
	}
	else{
		printf("Gecersiz islem.");
	}
	
	return 0;
}




// WHILE DONGUSU ------------------------------------------------------------------------

int main(){
	
	int sayi;
	scanf(" %d", &sayi);
	
	
	while (sayi < 50){   // sayi 50den kucuk oldugu surece bu islemi yap
		
		printf("\n%d", sayi);
		sayi = sayi + 3;
		
		
	}
	while (sayi >= 50 && sayi < 1000){
		
		printf("\n%d", sayi);
		sayi = sayi + 50;
	}
	
	
	
	return 0;
	
	
}






int main(){
	
	int i=;
	
	for (i=10; i<150 ; i++){  // for (durum ; istenen durum (kadar); yapýlacak islem)
		
		printf("%d\n", i);
	}
	
	
	
	return 0;
}




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





int main(void)
{
        printf("1 < 2 ifadesinin sonucu: %d\n", (1 < 2));
        printf("2 < 1 ifadesinin sonucu: %d\n", (2 < 1));
}





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



//https://www.udemy.com/course/sifirdan-ileri-seviyeye-komple-c-programlama-kursu/learn/lecture/11708174#overview
int main(void){
	
	char islem;
	int sayi1, sayi2;
	char sonuc;
	
	printf("Sayilari giriniz");
	scanf("%d %d", &sayi1, &sayi2);
	printf("islemi giriniz");
	scanf("%s", &islem);
	
	if (islem =='+'){
		
		printf("Cevap\n %d/%d", (sayi1 + sayi2) , (sayi1 * sayi2));
	}
	if (islem =='-'){
		
		printf("Cevap\n %d/%d", (sayi1 - sayi2) , (sayi1 * sayi2));
	}
	
	
}

//https://www.udemy.com/course/sifirdan-ileri-seviyeye-komple-c-programlama-kursu/learn/lecture/20126464#overview
int main(void){

	int a,b,c,x,sonuc;
	
	printf("a b c ve x degerlerini sirasi ile giriniz.\n");
	scanf("%d %d %d %d", &a, &b, &c, &x);
	
	printf("Sonuc = %d", a*x*x + b*x + c);


	return 0;
}


//https://www.udemy.com/course/sifirdan-ileri-seviyeye-komple-c-programlama-kursu/learn/lecture/12166514#overview
int main(void){
	
	int a,b;
	
	printf("iki sayi girin.\n");
	scanf("%d%d", &a,&b);
	
	if(a==b){
		printf("iki sayi esittir");
	}
	if(a<b){
		printf("%d sayisi %d'den kucukturt", a,b);
	}
	else{
		printf("%d sayisi %d'den buyuktur", a,b);
	}
	
}




//https://www.udemy.com/course/sifirdan-ileri-seviyeye-komple-c-programlama-kursu/learn/lecture/12171794#overview

int main(void){
	
	int min,max, sonuc;
	printf("maximum deger giriniz\n");
	scanf("%d", &max);
	
	min = 1;
	while(min <= max){
		if(min == max){
			printf("%d", min);
			min++;
		}
		else{
			printf("%d + ", min);
			min++;
		}
	}
	
	sonuc = (max* max+1)/2;
	printf(" = %d", sonuc);
	
}




//https://www.udemy.com/course/sifirdan-ileri-seviyeye-komple-c-programlama-kursu/learn/lecture/12173202#overview

int main(void){
	float x;
	printf("Bir x degeri giriniz\n");
	scanf("%f", &x);
	
	printf(">> f(%.3f) = %.3f", x, x*x*x+13*x*x+47*x+5);
	
	
	return 0;
}




//https://www.udemy.com/course/sifirdan-ileri-seviyeye-komple-c-programlama-kursu/learn/lecture/12173210#overview

int main(void){
	
	int a,b;
	
	printf("iki sayi giriniz\n");
	scanf("%d%d", &a,&b);
	
	if(a*b > 0){
		printf(">> Sonuc(%d*%d) = +1", a,b);
	}
	if(a*b < 0){
		printf(">> Sonuc(%d*%d) = -1", a,b);
	}
	if(a*b == 0){
		printf(">> Sonuc(%d*%d) = 0", a,b);
	}
	
}


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
	
	
}






int main(){
	int urun,para,yuklenen;
	ilk:
	printf("Paranizi kutuya atiniz\n");
	scanf("%d", &para);
	uc:
	printf("Bakiye yuklendi\nBakiyeniz = %d\n\n", para);
	iki:
	printf("Almak istediginiz urunu seciniz>>\n1. Su satin al 2 TL\n2. Kek satin al 5 TL\n3. Gofret satin al 10 TL\n\n0. Cik\n9. Bakiye yukle\n");
	scanf("%d", &urun);
	
	
	switch(urun){
		case 1: 
			if(para >= 2){
				para = para - 2;
				printf("Su satin alindi\nKalan bakiye %d\n", para);
				goto iki;
			}
			else{
				printf("Yeterli Paraniz Bulunmuyor\n");
				goto ilk;
			}
		break;
		case 2: 
			if(para >= 5){
				para = para - 5;
				printf("Kek satin alindi\nKalan bakiye %d\n", para);
				goto iki;
			}
			else{
				printf("Yeterli Paraniz Bulunmuyor\n");
				goto ilk;
			}
		break;
		case 3: 
			if(para >= 10){
				para = para - 10;
				printf("Gofret satin alindi\nKalan bakiye %d\n", para);
				goto iki;
			}
			else{
				printf("Yeterli Paraniz Bulunmuyor\n");
				goto ilk;
			}
		break;
		case 0:
		break;
		case 9:
			printf("Para yuklenmesi bekleniyor\n");
			scanf("%d", &yuklenen);
			para = para + yuklenen;
			goto uc;
		break;
		default:
			printf("Boyle bir islem bulunmuyor\n");
			goto ilk;
		break;
	}
	
	
	return 0;
}


int main(void)
{
  char cdizi1[9] = { 'K', 'a', 'r', 'a', 'k', 't', 'e', 'r', '\0' };
  char cdizi2[9] = "dizileri" ;

  printf("%s %s", cdizi1, cdizi2);

  return 0;
}



int main(void)
{
	int urunfiyatlari[3]={5,10,20};
	char urunler[100]="'kek','salam','at'";
    
	printf("%s = %d", urunler[2],urunfiyatlari[2]);


	return 0;
}


*/










