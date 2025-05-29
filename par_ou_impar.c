#include <stdio.h>

int main(void) {
    int n;
    
    printf("Descubra se um número é par ou ímpar.\n");
    printf("Digite o número: ");
    scanf("%d", &n);

if (n % 2 == 0){
    printf("O número %d é par.", n);   
} else {
    printf("O número %d é ímpar.", n);
}

   return 0;
}
