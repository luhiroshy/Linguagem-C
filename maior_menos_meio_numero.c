#include <stdio.h>

int main(void) {
    float n1, n2, n3;

    printf("Veja qual entre três é o maior número\n\n");
    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);
    printf("Digite o terceiro número: ");
    scanf("%f", &n3);

//Maior
if((n1 > n2) && (n1 > n3)){
    printf("\n%.1f é o maior número.", n1);
} 
if((n2 > n1) && (n2 > n3)){
    printf("\n%.1f é o maior número.", n2);
} 
if((n3 > n1) & (n3 > n2)){
    printf("\n%.1f é o maior número.", n3);
} 

//Menor
if((n1 < n2) && (n1 < n3)){
    printf("\n%.1f é o menor número.", n1);
} 
if((n2 < n1) && (n2 < n3)){
    printf("\n%.1f é o menor número.", n2);
} 
if((n3 < n1) & (n3 < n2)){
    printf("\n%.1f é o menor número.", n3);
}

//Intermediário
if(((n1 > n2) && (n1 < n3)) || ((n1 < n2) && (n1 > n3))){
    printf("\n%.1f é o número intermediário.", n1);
} 
if(((n2 > n1) && (n2 < n3)) || ((n2 < n1) && (n2 > n3))){
    printf("\n%.1f é o número intermediário.", n2);
} 
if(((n3 > n1) && (n3 < n2)) || ((n3 < n1) && (n3 > n2))){
    printf("\n%.1f é o número intermediário.", n3);
}

//Iguais
if((n1 == n2) && (n2 == n3)){
    printf("\nOs números são iguais.");
}

    return 0;
}
