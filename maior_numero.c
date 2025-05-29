#include <stdio.h>

int main(void) {
    int n1, n2, n3;

    printf("Veja qual entre três é o maior número\n\n");
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    printf("Digite o terceiro número: ");
    scanf("%d", &n3);

if((n1 > n2) && (n1 > n3)){
    printf("\n%d é o maior número.", n1);
} 
if((n2 > n1) && (n2 > n3)){
    printf("\n%d é o maior número.", n2);
} 
if((n3 > n1) & (n3 > n2)){
    printf("\n%d é o maior número.", n3);
} 
if((n1 == n2) && (n2 == n3)){
    printf("\nOs números são iguais.");
}

    return 0;
}
