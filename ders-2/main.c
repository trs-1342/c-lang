#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char arabaMarkasi[10]="Tesla";
	char arabaSahibi[15]="Elon Musk";

	printf("%s\n", arabaMarkasi);
	printf("%s\n", arabaSahibi);

	// ===

	char arabaDegeri[20]="1.3 Trilyon Dolar";

	printf("Araba Degeri: %s\n", arabaDegeri);

	// ===

	char ogrenciAdi[10]="Halil";
	char ogrenciSoyadi[13]="Hattab Hamso";
	char ogrenciIli[10]="Istanbul";
	char ogrenciYasi[2]="18";
	char ogrenciDogumYili[4]="2007";
	char ogrenciDogumAyi[10]="Ocak";
	char ogrenciDogumGunu[2]="01";

	printf("\n\n****** Kisi Tanitimi ******\n");

	printf("\nKisinin Ad Soyad bilgisi: %s %s", ogrenciAdi, ogrenciSoyadi);
	printf("\nKisinin Dogum Tarihi bilgisi: %s %s %s", ogrenciDogumGunu, ogrenciDogumAyi, ogrenciDogumYili);
	printf("\nKisinin Yasi ve Yasadigi Sehir bilgisi: %s %s \n", ogrenciYasi, ogrenciIli);

	return 0;
}
