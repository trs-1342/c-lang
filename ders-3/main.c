#include <stdio.h>
#include <stdlib.h>

int main() 
{

	/*char* ad;
	printf("ad giriniz: ");
	// uyari: scanf'e deger girerken bosluktan sonrasini almaz.
	scanf("%s", ad); // girilen degeri ad(belirtilen) degiskene atama

	printf("girilen ad: %s", ad);*/


	// scanf icin degisken[n] kullanmaniz gerekiyor yoksa algilamaz.
	// char* ad; ==> yanlis
	char ad[20], soyad[20], yas[20], sehir[20], meslek[20];

	// WARNING !!!

	/*

		eger 2 scanf arka arkaya varsa ve 1. scanf 2 kelimelik deger girilirse bosluktan sonra 2. scanf'e gider.

		ornegin:

		1. ad gir: halil hattab
		2. yas gir:

		1. adimdaki 'hattab' degeri 2. satirdaki scanf degerine gider ve program sonlanir.
		eger 3 scanf var ise otomatikmen 3. scanf'i baslatir.

	*/

	// printf ve scanf ayni satirda yazabildigimi fark ettim! :)
	printf("ad gir: "); scanf("%s", ad);
	printf("soyad gir: "); scanf("%s", soyad);
	printf("yas gir: "); scanf("%s", yas);
	printf("sehir gir: "); scanf("%s", sehir);
	printf("meslek gir: "); scanf("%s", meslek);


	printf("\nadiniz: %s", ad);
	printf("\nsoyadiniz: %s", soyad);
	printf("\nyasiniz: %s", yas);
	printf("\nsehir: %s", sehir);
	printf("\nmeslek: %s", meslek);

	return 0;
}
