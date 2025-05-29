#include <stdio.h>

int main(void) {
    float l1, l2, l3;
    
    printf("Descubra o tipo de um triângulo.\n");
    printf("Informe o primeiro lado do triângulo: ");
    scanf("%f", &l1);
    printf("Informe o segundo lado do triângulo: ");
    scanf("%f", &l2);
    printf("Informe o terceiro lado do triângulo: ");
    scanf("%f", &l3);
    
if ((l1 == l2) && (l2 == l3)){
    printf("\nO triângulo é equilátero.");
}
if ((l1 != l2) && (l2 != l3)){
    printf("\nO triângulo é escaleno.");
}
if ((l1 == l2) && (l2 != l3)){
    printf("\nO triângulo é isósceles.");
}
if ((l2 == l3) && (l1 != l3)){
    printf("\nO triângulo é isósceles.");
}

   return 0;
}
