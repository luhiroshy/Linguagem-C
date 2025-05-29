#include <stdio.h>

int main(void) {
    float n1, n2, n3, n4, n5, p1, p2, p3, p4, p5, pesos, media;
    
    printf ("Digite cinco números e descubra a média ponderada \n");
    printf ("Digite o primeiro número: ");
    scanf ("%f", &n1);
        printf ("Agora digite o peso do primeiro número: ");
        scanf ("%f", &p1);
    printf ("Digite o segundo número: ");
    scanf ("%f", &n2);
        printf ("Agora digite o peso do segundo número: ");
        scanf ("%f", &p2);
    printf ("Digite o terceiro número: ");
    scanf ("%f", &n3);
        printf ("Agora digite o peso do terceiro número: ");
        scanf ("%f", &p3);
    printf ("Digite o quarto número: ");
    scanf ("%f", &n4);
        printf ("Agora digite o peso do quarto número: ");
        scanf ("%f", &p4);
    printf ("Digite o quinto número: ");
    scanf ("%f", &n5);
        printf ("Agora digite o peso do quinto número: ");
        scanf ("%f", &p5);
   
pesos = p1 + p2 + p3 + p4 + p5;
media = (n1 + n2 + n3 + n4 + n5) / pesos;
    
    printf ("A média ponderada dos números digitados é: %.1f.", media);

    return 0;
}
