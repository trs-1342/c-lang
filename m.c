#include <stdio.h>

int main()
{
    float s1, s2, i;

    printf("1. sayi gir: ");
    scanf("%f", &s1);

    printf("2. sayi gir: ");
    scanf("%f", &s2);

    printf("\n 1) +\n 2) -\n 3) *\n 4) /\nislemi sec: ");
    scanf("%f", &i);

    if (i == 1)
    { // TOPLAMA +
        printf("+: %f", s1 + s2);
    }
    else if (i == 2)
    { // CIKARMA -
        printf("-: %f", s1 - s2);
    }
    else if (i == 3)
    { // CARPMA *
        printf("*: %f", s1 * s2);
    }
    else if (i == 4)
    { // BOLME /
        printf("/: %f", s1 / s2);
    }
    else
    {
        printf("hata!"); // ERROR !
    }
}
