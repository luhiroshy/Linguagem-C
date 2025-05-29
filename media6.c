#include <stdio.h>

int main(void) {
    float n1, n2, n3, n4, n5, n6, media;
    
    printf ("Digite seis números e descubra a média \n");
    printf ("Digite o primeiro número: ");
    scanf ("%f", &n1);
    printf ("Digite o segundo número: ");
    scanf ("%f", &n2);
    printf ("Digite o terceiro número: ");
    scanf ("%f", &n3);
    printf ("Digite o quarto número: ");
    scanf ("%f", &n4);
    printf ("Digite o quinto número: ");
    scanf ("%f", &n5);
    printf ("Digite o sexto número: ");
    scanf ("%f", &n6);
    
    media = (n1 + n2 + n3 + n4 + n5 + n6) / 6;
    
    printf ("\nA média dos números digitados é: %.1f", media);

    return 0;
}
