#include <stdio.h>

int main(){

	// ornek scanf kullanimi


	// [n] n sayisi ne kadar olacagini degiskenin hangi veriyi tutacagini bildiginizde sayisini ona gore degistirirsiniz.

	// WARNING :

	// kod bazi yerlerde kayma yapacak char n atamalari ve scanf yuzunden, arastirdim fakat degistirmek istemedim kursu bozmamak adina.

	char ad[20], soyad[20], uyruk[20], cinsiyet[5], medeniHal[10], anneAdi[20], babaAd[20], dogduguUlke[40], dogduguSehir[20], dogumGunu[2], dogumAyi[2], dogumYili[4], tcNo[11];

	printf("*** E-DEVLET BILGILERI ***");

	printf("\n\nadiniz: "); scanf("%s", ad);
	printf("soyadiniz: "); scanf("%s", soyad);
	printf("uyruk: "); scanf("%s", uyruk);
	printf("cinsiyet: "); scanf("%s", cinsiyet);
	printf("medeni hal: "); scanf("%s", medeniHal);
	printf("anne adi: "); scanf("%s", anneAdi);
	printf("baba adi: "); scanf("%s", babaAd);
	printf("dogdugu ulke: "); scanf("%s", dogduguUlke);
	printf("dogdugu sehir: "); scanf("%s", dogduguSehir);
	printf("dogum gunu (dd): "); scanf("%s", dogumGunu);
	printf("dogum ayi (mm): "); scanf("%s", dogumAyi);
	printf("dogum yili (yyyy): "); scanf("%s", dogumYili);
	printf("tc no: "); scanf("%s", tcNo);

	printf("\n\nKisi Bilgileri:");
	printf("===============");
	printf("\n\nTC NO: %s", tcNo);
	printf("\nAd Soyad: %s %s", ad, soyad);
	printf("\nUyruk: %s", uyruk);
	printf("\nCinsiyet: %s", cinsiyet);
	printf("\nDogum Tarihi: %s/%s/%s", dogumGunu, dogumAyi, dogumYili);
	printf("\nDogdugu Ulke: %s", dogduguUlke);
	printf("\nDogdugu Sehir: %s", dogduguSehir);
	printf("\n===============\n\n");
	printf("Kisinin Ebeveyn Bilgileri:");
	printf("\nAnne Adi: %s - Baba Adi: %s", anneAdi, babaAd);

	return 0;
}