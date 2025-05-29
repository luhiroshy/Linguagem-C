#include <stdio.h>
#include <math.h>

int main(void) {
    float n1, raiz;
    
    printf("Descubra a raiz de um número.\n");
    printf("Digite o número: ");
    scanf("%f", &n1);

raiz = sqrt(n1);

    printf("\nA raiz quadrada de %.1f é %.2f.", n1, raiz);
    
     return 0;
}
