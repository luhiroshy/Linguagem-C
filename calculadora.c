#include <stdio.h>

int main(void) {
    float n1, n2, simb, total;
    
    
    printf("Digite dois números para um operação matemática.\n");
    printf("Escreva o primeiro número: ");
    scanf("%f", &n1);
    printf("Escreva o segundo número: ");
    scanf("%f", &n2);
    printf("\nAgora escolha a operação:\n1-Soma\n2-Subtração\n3-Multiplicação\n4-Divisão\nDigite a opção: ");
    scanf("%f", &simb);
    
    if(simb == 1){
    total = n1 + n2;
    printf("\nO resultado é: %.1f", total);
    }
    if(simb == 2){
    total = n1 - n2;
    printf("\nO resultado é: %.1f", total);
    }
    if(simb == 3){
    total = n1 * n2;
    printf("\nO resultado é: %.1f", total);
    }
    if(simb == 4){
    total = n1 / n2;
    printf("\nO resultado é: %.1f", total);
    }
    
    return 0;
}
