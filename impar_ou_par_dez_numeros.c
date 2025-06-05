#include <stdio.h>

int main() {
    int i;
    
    printf("Digite dez números e descubra se são ímpares ou pares\n\n");
    printf("Digite o primeiro número: ");
    scanf("%d", &i);
    
    if(i % 2 == 0){
            printf("O número %d é par\n\n", i);
        } else {
            printf("O número %d é ímpar\n\n", i);
        }
    
    for(i = 1;i <= 9;i++) {
        printf("Insira outro número: ");
        scanf("%d", &i);
        if(i % 2 == 0){
            printf("O número %d é par\n\n", i);
        } else {
            printf("O número %d é ímpar\n\n", i);
        }
    }
    

    return 0;
}
