#include <stdio.h>

int main(void) {
    int n1, n2, soma; 
    
    printf ("Insira dois números e descubra sua soma. \n");
    printf ("Insira o primeiro número: ");
    scanf ("%d", &n1);
    printf ("Insira o segundo número: ");
    scanf ("%d", &n2);
    
    soma = n1 + n2;
    
    printf ("A soma dos números digitados é: %d", soma);
    
    return 0;
}
