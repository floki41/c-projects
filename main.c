#include<stdio.h>
#include<math.h>

int main() {
	
	
	// Ekrana yazd�rma fonksiyonu printf kullan�m� 
	
	/*
	printf("Merhaba \t Yazilimci");
	printf("C Programlamaya Hos Geldiniz\n");
	
	int x = 5;
	printf("%d\n", x);
	
	float a = 3.0;
	double t = 2.4;
	printf("%f & %f\n", a, t);
	
	char b = 'y';
	printf("%c\n", b);
	
	printf("C Programlama", "%s");
	*/
	
	
	
	
	// Veri tipleri, De�i�kenler ve Format Belirleyiciler
	
	/*
	int a1 = 42;
	char b1 = 66;
	char b2 = 'B';
	float c1 = 4.2;
	double d1 = 0.21;
	printf("%d %c %d %f %f %s\n", a1, b1, b2, c1, d1, "Yazilim");
	
	
	printf("%d byte\n", sizeof(char));
	printf("%d byte\n", sizeof(int));
	printf("%d byte\n", sizeof(short int));
	printf("%d byte\n", sizeof(long int));
	printf("%d byte\n", sizeof(float));
	printf("%d byte\n", sizeof(double));
	*/
	
	
	
	
	// Aritmetik ��lemler
	
	/*
	int x1 = 1;
	int x2 = -1;
	
	printf("%.1f\n", 12.1+9.2);
	printf("%d\n", 12-9);
	printf("%.2f\n", 12*9);
	printf("%d\n", 12/9);
	printf("%d\n", 12%9);
	
	
	printf("%d\n", -x1);
	printf("%d\n", -x2);
	*/
	
	
	
	
	// Aritmetik �fadeler
	
	/*
	printf("%d\n", 2-3+4);
	printf("%d\n", 2*3-4);
	printf("%d\n", 2-3/4);
	printf("%d\n", 2+3%4);
	printf("%d\n", 2/3*4);
	printf("%d\n", 2%3/4);
	printf("%d\n", -2+3);
	printf("%d\n", 2* -3);
	printf("%d\n", -2*-3);
	printf("%d\n", (2-3)%4);
	*/
	
	
	
	
	// Atamalar, Art�rma ve Azaltma ��lemler
	
	/*
	int x = 5;
	int y = 7;
	int a = 2;
	
	x = y;
	y = x + a + 1;
	printf("x:%d\ny:%d\na:%d\n",x, y, a);
	
	
	x = 4;
	y = 5;
	a = 6;
	printf("x:%d y:%d a:%d\n", --x, ++y, a++);
	printf("x:%d y:%d a:%d\n", x, y, a);
	printf("x:%d y:%d a:%d\n", x--, --y, a--);
	*/
	
	/*
	x = 2;
	a = 6;
	x = x + (a + 1);
	// x += a + 1;
	
	printf("%d\n", x);
	
	x = y = a + 4;
	printf("x:%d y:%d a:%d\n", x, y, a);
	*/
	
	
	
	
	// T�r D�n���mleri
	
	/*
	int x = 3;
	float y = 0.1;
	printf("%f\n", x/y);
	
	printf("%f\n", 2+4.2 +4%2);
	printf("%f\n", 12.5/2);
	printf("%f\n", (int)3.2);
	printf("%f\n", (float)3);
	*/
	
	
	
	
	// Standart Giri�-��k�� Fonksiyonlar� 			==> Kullan�c�dan input alma fonksiyonu => scanf
	
	/*
	#define PI 3.14
	
	int yaricap;
	float hacim;
	
	printf("Kurenin yaricapini giriniz: ");
	scanf("%d", &yaricap);
	
	hacim = (4/3.0) + PI * (yaricap*yaricap*yaricap);
	printf("Kurenin hacmi %2.f'dir.'", hacim);
	*/
	
	
	
	
	// �rnek Programlar
	
	
	// Girilen 5 say�n�n ortalamas�n� hesaplayan program
	/*
	int a, b, c, d, e;
	
	float aritmetik;
	
	printf("5 tane sayi giriniz: ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	aritmetik = (a+b+c+d+e) / 5.0;
	printf("Girdiginiz sayilarin aritmetik ortalamasi %.2f", aritmetik);
	*/
	
	
	// ax^2 + bx +c �eklindeki denklemin k�klerini bulan proogram
	
	/*
	int a, b, c;
	float x1, x2;
	float delta;
	
	printf("Denklemin a'sini giriniz: ");
	scanf("%d", &a);
	
	printf("Denklemin b'sini giriniz: ");
	scanf("%d", &b);
	
	printf("Denklemin c'sini giriniz: ");
	scanf("%d", &c);
	
	delta = b*b -4*a*c;
	
	x1 = (-b + (sqrt(delta)) ) / 2*a;
	x2 = (-b - (sqrt(delta)) ) / 2*a;
	
	printf("Denklemin 1. koku: %.2f, 2. koku: %.2f'dir.", x1, x2);
	*/
	
	
	
	
	// Ko�ullu �fadeler
	
	/*
	int note;
	printf("Notunuzu girin: ");
	scanf("%d", &note);
	
	if(note > 60){
		printf("Dersten gectiniz :)");
	}
	else {
		printf("Dersten kaldiniz...");
	}
	*/
	
	
	
	
	// Mant�ksal Operat�rler
	
	/*
	int a = 40;
	int b = 41;
	
	a < b;
	a > b;
	a >= b;
	a <= b;
	a != b;
	a == b;
	*/
	
	
	// Al��t�rmalar
	
	/*
	int a = 40;
	int b = 50;
	int c = 60;
	int d = 70;
	
	a < c && c <= d && (a > b || b < d)
	
	!(a >= d)
	*/
	
	
	/*
	int a, b = 20, c = 30;
	a = b < c ? : c;
	printf("%d", a);
	*/
	
	
	
	// Vize-Final hesaplayan program
	
	/*
	int vize1, vize2, final;
	float dersOrt, ortalama;
	
	printf("1. vize notunuzu giriniz: ");
	scanf("%d", &vize1);
	printf("2. vize notunuzu giriniz: ");
	scanf("%d", &vize2);
	printf("Final notunuzu giriniz: ");
	scanf("%d", &final);
	printf("Universite ortalamasi: ");
	scanf("%f", &ortalama);
	
	dersOrt = (vize1 + vize2 + final) / 3.0;
	
	if (dersOrt > 60) {
		printf("Dersten gectiniz :)");
	}
	else if (dersOrt > 50){
		printf("Dersten bute kaldiniz...");
		
		if (prtalama < 2.5) {
			printf("Butu gecsen bile dersi seneye al, cunku ortalaman dusuk");
		}
	}
	else {
		printf("Kaldiniz.");
	*/
	
	
	
	// Harf Notu Hesaplama
	
	/*
	int vize1, vize2, final;
	float dersOrt, uniOrt;
	
	printf("1. vize: ");
	scanf("%d", &vize1);
	
	printf("2. vize: ");
	scanf("%d", &vize2);
	
	printf("final: ");
	scanf("%d", &final);

	printf("Universite ortalamanizi giriniz: ");
	scanf("%f", &uniOrt);
	
	dersOrt = (vize1 * 3 / 10.0 + vize2 * 3 / 10.0 + final * 4 / 10.0);
	
	if(dersOrt > 90) {
		printf("Harf Notunuz - AA ve Ders Ortalamaniz: %f", dersOrt);
	}
	else if(dersOrt >= 85 && dersOrt < 90) {
		printf("Harf Notunuz - BA ve Ders Ortalamaniz: %f", dersOrt);
	}
	else if(dersOrt >= 80 && dersOrt < 85) {
		printf("Harf Notunuz - BB ve Ders Ortalamaniz: %f", dersOrt);
	}
	else if(dersOrt >= 75 && dersOrt < 80) {
		printf("Harf Notunuz - CB ve Ders Ortalamaniz: %f", dersOrt);
	}
	else if(dersOrt >= 70 && dersOrt < 75) {
		printf("Harf Notunuz - CC ve Ders Ortalamaniz: %f", dersOrt);
		if ( uniOrt < 2.5) {
			printf("Dersi tekrar alman yararli olur cunku ortalaman dusuk");
		}
	}
	else if(dersOrt >= 65 && dersOrt < 70) {
		printf("Harf Notunuz - DC ve Ders Ortalamaniz: %f", dersOrt);
		if ( uniOrt < 2.5) {
			printf("Dersi tekrar alman yararli olur cunku ortalaman dusuk");
		}
	}
	else if(dersOrt >= 60 && dersOrt < 65) {
		printf("Harf Notunuz - DD ve Ders Ortalamaniz: %f", dersOrt);
		if ( uniOrt < 2.5) {
			printf("Dersi tekrar alman yararli olur cunku ortalaman dusuk");
		}
	}
	else {
		printf("Harf Notunuz - FF ve Ders Ortalamaniz: %f", dersOrt);
		printf("Dersten kaldiniz.");
	}
	*/
	
	
	
	// ATM Ornegi
	/*
	int islem;
	int bakiye = 1000;
	int tutar;
	
	printf("Islemler\n1.Para Cekme\n2.Para Yatirma\n3.Havale Yapma\n4.Bakiye Sorgulama\n5.Kart Iade\n\n\n");
	
	printf("Islem seciniz: ");
	scanf("%d",  &islem);
	
	switch(islem) {
		case 1:
			printf("Bakiyeniz: %d\n", bakiye);
			printf("Cekilecek Tutar: ");
			scanf("%d", &tutar);
			if(tutar > bakiye) {
				printf("Bakiye yetersiz.\n");
			}
			bakiye -=tutar;
			printf("Bakiyeniz: %d", bakiye);
			break;
		case 2:
			printf("Bakiyeniz: %d\n", bakiye);
			printf("Yatiralacak Tutar: ");
			scanf("%d", &tutar);
			
			bakiye +=tutar;
			printf("Bakiyeniz: %d", bakiye);
			break;
		case 3:
			printf("Bakiyeniz: %d\n", bakiye);
			printf("Havale Yapilacak Tutar: ");
			scanf("%d", &tutar);
			if(tutar > bakiye) {
				printf("Bakiye yetersiz.\n");
			}
			bakiye -= tutar;
			printf("Bakiyeniz: %d", bakiye);
			break;
		case 4:
			printf("Bakiyeniz: %d\n", bakiye);
			break;
		case 5:
			printf("Kart Iade Edildi.\n");
			break;
		default:
			printf("Bilinmeyen Islem.");
			break;
	}
	*/
	
	
	
	// D�ng�ler
	//While Dongusu
	
	/*
	int i;
	
	i = 0;
	
	while(i < 10) {
		
		printf("%d) Merhaba Yazilim Gelistiricisi\n", i);
		
		i++;
	}
	
	printf("%d) Dongu bitti.", i);
	*/
	
	
	// Faktoriyel
	/*
	int n;
	int fact = 1;
	
	printf("Faktoriyel istediginiz sayiyi giriniz: ");
	scanf("%d", &n);
	
	while (n != 0) {
		printf("%d\n", n);
		fact = fact *n;
		
		n--;
	}
	printf("%d", fact);
	*/
	
	
	
	// Do-While Dongusu
	
	/*
	int n = 10;
	
	do {
		printf("%d\n", n);
		
		n--;
	}
	while(n > 0);
	*/
	
	
	
	/* 1234 rakamlar� toplam� ka� haneli oldu�unu bulma */
	
	/*
	int n, hane = 0, toplam = 0;
	
	printf("Sayiyi giriniz: ");
	scanf("%d", &n);
	
	do {
		toplam += (n % 10);
		
		hane ++;
		
		n = n / 10;
	}
	while(n > 0);
	
	printf("Rakamlarin toplami %d haneli", toplam, hane);
	*/
	
	
	
	// For Dongusu
	
	/*
	int i, j;
	
	for (i=0, j=1; i<10 && j < 5; i++, j++){
		printf("%d\n", i);
	}
	*/
	
	/*
	for (j=0; j<3; j++) {
		printf("i:%d j %d\n", i, j);
	}
	*/
	
	
	
	// Fibonacci Serisi
	
	// 1, 1, 2, 3, 5, 8, 13, 21...
	
	/*
	int ilkSayi = 1;
	int ikinciSayi = 1;
	int i;
	
	printf("%d\n%d\n", ilkSayi, ikinciSayi);
	
	for (i=0; i<12; i++){
		
		int temp = ikinciSayi;
		
		ikinciSayi += ilkSayi;
		
		ilkSayi = temp;
		
		printf("%d\n", ikinciSayi);
	}
	*/
	
	
	
	// Break Deyimi
	
	/*
	int toplam = 0;
	int sayi;
	int i;
	
	for (i=0; true; i++){
		printf("Sayiyi giriniz: (Cikmak icin -1'e basiniz.)");
		scanf("%d", &sayi);
		
		if (sayi == -1){
			break;
		}
		toplam += sayi;
	}
	printf("%d", toplam);
	*/
	
	
	
	// Continue Deyimi
	
	int toplam = 0;
	
	int i = 0;
	
	while (i <= 10) {
		if (i % 2 == 1) {
			i++;
			continue;
		}
		toplam += i;
		i++;
	}
	printf("%d", toplam);
	
	return 0;
}