#include <stdio.h>
#include <math.h>

int main(void) {
    float n, raiz;
    
    printf("Descubra a raiz de um número.\n");
    printf("Digite o número: ");
    scanf("%f", &n);

raiz = sqrt(n);

    printf("\nA raiz quadrada de %.1f é %.2f.", n, raiz);
    
     return 0;
}
