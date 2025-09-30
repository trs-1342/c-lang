#include <stdio.h>

int main()
{
	float sayi1, sayi2;
	char islem;

	printf("Birinci sayiyi girin: ");
	scanf("%f", &sayi1);

	printf("Ikinci sayiyi girin: ");
	scanf("%f", &sayi2);

	printf("Islemi secin (+, -, *, /): ");
	scanf(" %c", &islem);

	switch (islem)
	{
	case '+':
		printf("Sonuc: %.2f\n", sayi1 + sayi2);
		break;
	case '-':
		printf("Sonuc: %.2f\n", sayi1 - sayi2);
		break;
	case '*':
		printf("Sonuc: %.2f\n", sayi1 * sayi2);
		break;
	case '/':
		if (sayi2 != 0)
			printf("Sonuc: %.2f\n", sayi1 / sayi2);
		else
			printf("Hata: 0'a bolme yapilamaz!\n");
		break;
	default:
		printf("Gecersiz islem secimi!\n");
	}

	return 0;
}