#include <stdio.h>

float toplama(float s1, float s2){
	return s1+s2;
}

float cikarma(float s1, float s2){
	return s1-s2;
}

float carpma(float s1, float s2){
	return s1*s2;
}

float bolme(float s1, float s2){
	if(s2 == 0){
		printf("\n\tsifira bolme yapamazin! : %f/0 olamaz", s1);
		return 0;
	} else{
		return s1/s2;
	}
}

int main(){
	
	char *i;
	float s1, s2, res;

	printf("function ile hesap makinesi\n\n=== Menu ===\n\n");

	printf("1) toplama +");
	printf("\n2) cikartma -");
	printf("\n3) carpma *");
	printf("\n4) bolme /");
	printf("\n0) cikis yap");

	printf("\nsecim: ");
	scanf("%s", &i);

	if(i == '1'){

		scanf("%f %f", &s1, &s2);
		res = toplama(s1, s2);
		printf("\ntoplama: %f", res);

	} else if(i == '2'){

		scanf("%f %f", &s1, &s2);
		res = cikarma(s1, s2);
		printf("\ncikarma: %f", res);

	} else if(i == '3'){

		scanf("%f %f", &s1, &s2);
		res = carpma(s1, s2);
		printf("\ncarpma: %f", res);

	} else if (i == '4'){

		scanf("%f %f", &s1, &s2);
		res = bolme(s1, s2);
		if(res == 0){
			printf("\n\t0 bolme hatasi.");
		} else {
			printf("\nbolme: %f", res);
		}

	} else if (i == '0'){

		printf("exit");

	} else {
		printf("error in if-else blok code: %s", i);
	}

	return 0;
}