#include<stdio.h>
#include<stdlib.h>

int main() {

	int s1, s2, sec, topla, cikar, carp, bol;

	printf("Toplam:1\nCikart:2\nCarp:3\nBol\n\n");

	printf("Yapilacak islemi sec: ");
	scanf_s("%d", &sec);

	printf("1.Sayiyi Sec: ");
	scanf_s("%d", &s1);

	printf("2.Sayiyi Sec: ");
	scanf_s("%d", &s2);

	switch (sec)
	{
	case 1: topla = s1 + s2; printf("Toplam= %d", topla);
		break;
		
	case 2: cikar = s1 - s2; printf("Cikart= %d", cikar);
		break;

	case 3: carp = s1 * s2; printf("Carpim= %d", carp);
		break;
		
	case 4: bol = s1 / s2; printf("Bolum= %d", bol);
		break;

	default: printf("Lutfen Yapilacak Dort Islemi Secin");
	}

	return 0;
 }