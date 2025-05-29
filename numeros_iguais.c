#include <stdio.h>

int main(void) {
    int n1, n2;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    
    if(n1 == n2){
        printf("\nEsses números são iguais!");
    } else{
        printf("\nEsses números não são iguais!");
    }

    return 0;
}
