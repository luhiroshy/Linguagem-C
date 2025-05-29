#include <stdio.h>

int main(void) {
    float n1, n2, media; 
    
    printf("Insira dois números e descubra a média\n");
    printf("Insira o primeiro número: ");
    scanf("%f", &n1);
    printf("Insira o segundo número: ");
    scanf("%f", &n2);
    
    media = (n1 + n2) / 2.0;
    
    printf("\nA média dos números digitado é: %.1f", media);
    
   return 0;
}
