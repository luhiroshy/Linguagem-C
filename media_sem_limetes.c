// Online C compiler to run C program online
#include <stdio.h>

int main() {
 int nota = 0, vezes = 0, soma = 0;
 float media = 0.0;
 
 while(nota >= 0){
     printf("Digite a nota: ");
     scanf("%d", &nota);
     if(nota >= 0){
        soma += nota;
        vezes++;
} else{
    printf("Nota inválida \n");
}
 }
 
 media = (soma / vezes);
 
printf("A média é %.2f", media);

    return 0;
}
